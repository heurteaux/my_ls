/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** path_errors.c
*/

#include "../../includes/my.h"
#include <stdlib.h>

void on_invalid_path(char *current_dir)
{
    my_puterr("Invalid path for \"");
    my_puterr(current_dir);
    my_puterr("\"");
    exit(84);
}
