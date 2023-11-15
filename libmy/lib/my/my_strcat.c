/*
** EPITECH PROJECT, 2023
** Day07
** File description:
** task02
*/

#include "my.h"

char *my_strcat(char *dest, char const *src)
{
    int dest_len = my_strlen(dest);
    int total_len = my_strlen(src) + dest_len;

    for (int i = dest_len; i < total_len; i++) {
        dest[i] = src[i - dest_len];
    }
    return dest;
}
