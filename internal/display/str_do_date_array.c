/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** str_do_date_array.c
*/

#include <stdio.h>
#include <stdlib.h>
#include "../../includes/my.h"
#include "../../includes/data_strucs.h"

char *parse_date(char *str)
{
    int count = 0;
    char *result = malloc(sizeof(char) * 7);

    my_strmemset(result, 7);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ':')
            count++;
        if (count > 1)
            break;
        result[i] = str[i];
    }
    return result;
}

static int get_date_array_len(char *str)
{
    int count = 2;

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            count++;
    }
    return count;
}

static int get_element_len(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] == ' ')
            break;
    }
    return i;
}

static void on_switch_and_reset(
    char **result, int *element_id, char **element, int len)
{
    result[*element_id] = *element;
    *element = malloc(sizeof(char) * len);
    my_strmemset(*element, len);
    element_id[0] += 1;
    element_id[1] = 0;
}

char **str_to_date_array(char *str)
{
    int element_id[2] = {0, 0};
    char **result = malloc(sizeof(char *) * (get_date_array_len(str) + 1));
    char *element = malloc(sizeof(char) * (get_element_len(str) + 1));

    my_strmemset(element, get_element_len(str) + 1);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] == ' ')
            continue;
        if (str[i] == ' ') {
            result[element_id[0]] = element;
            on_switch_and_reset(result, element_id, &element,
                (get_element_len(&str[i + 1]) + 1));
            continue;
        }
        element[element_id[1]] = str[i];
        element_id[1] += 1;
    }
    return result;
}
