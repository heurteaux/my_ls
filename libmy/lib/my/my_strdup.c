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
    char *allocated_space = malloc(sizeof(char) * (my_strlen(src) + 1));

    my_strcpy(allocated_space, src);
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
