/*
** EPITECH PROJECT, 2023
** Day07
** File description:
** task03
*/

#include "my.h"

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int n = 0;

    while (dest[i] != '\0') {
        i++;
    }
    for (n = 0 ; n < nb && src[n] != '\0' ; n++) {
        dest[n + i] = src[n];
    }
    dest[n + i + 1] = '\0';
    return 0;
}
