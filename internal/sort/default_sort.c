/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** default_sort.c
*/
#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../includes/my.h"
#include "../../includes/sort.h"

/*char *cleanup_path(char *path)
{
    int len = (my_strlen(path) + 1);
    char *result = malloc(sizeof(char) * len);
    int count = 0;

    for (int i = 0; i < len; i++) {
        result[i] = '\0';
    }
    for (int i = 0; path[i] != '\0'; i++) {
        if (path[i] != '.') {
            result[count] = path[i];
            count++;
        }
    }
    return result;
}*/

void sort_iteration(struct dirent **fs_item_list, int nb_elements)
{
    struct dirent *temp1;
    char *lowcase_1;
    char *lowcase_2;

    for (int i = 0; i < (nb_elements - 1); i++) {
        lowcase_1 = my_strlowcase(fs_item_list[i]->d_name);
        lowcase_2 = my_strlowcase(fs_item_list[i + 1]->d_name);
        if (my_strcmp(lowcase_1, lowcase_2) > 0) {
            temp1 = fs_item_list[i];
            fs_item_list[i] = fs_item_list[i + 1];
            fs_item_list[i + 1] = temp1;
        }
        free(lowcase_1);
        free(lowcase_2 );
    }
}

void default_sort(struct dirent **fs_item_list, int nb_elements)
{
    if (nb_elements < 2)
        return;
    for (int i = 0; i < (nb_elements - 1); i++) {
        sort_iteration(fs_item_list, nb_elements);
    }
}
