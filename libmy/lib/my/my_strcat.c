/*
** EPITECH PROJECT, 2023
** Day07
** File description:
** task02
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int n = 0;

    while (dest[i] != '\0') {
        i++;
    }
    while (src[n] != '\0') {
        dest[n + i] = src[n];
        n++;
    }
    dest[n + i + 1] = '\0';
    return 0;
}
