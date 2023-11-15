/*
** EPITECH PROJECT, 2023
** Day08
** File description:
** my_strdup
*/

#include <stdlib.h>
#include "my.h"

char *my_strdup(char const *src)
{
    int len = (my_strlen(src) + 1);
    char *allocated_space = malloc(sizeof(char) * len);

    for (int i = 0; i < len; i++) {
        allocated_space[i] = '\0';
    }
    for (int i = 0; src[i] != 0; i++) {
        allocated_space[i] = src[i];
    }
    return allocated_space;
}

/*int main()
{
    char *test = "ABCDEFGHIJKLMNOP";
    char *allocated = my_strdup(test);
    my_putstr(test);
    my_putstr(allocated);
    free(allocated);
    }*/
