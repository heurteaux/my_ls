/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** data_strucs.h
*/

#pragma once

#include <dirent.h>

typedef struct on_switch_reset_t {
    char **result;
    int *element_id;
    char *element;
    char *str;
    int *i;
    int *element_char_id;
} on_switch_reset_struct;
