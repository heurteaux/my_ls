/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** my_memset.c
*/

#include "my.h"

void my_strmemset(char *str, int len)
{
    for (int i = 0; i < len; i++) {
        str[i] = '\0';
    }
}
