/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** path_errors.c
*/

#include "../../includes/my.h"
#include <stdlib.h>
#include <stdio.h>

void on_invalid_path(char *current_dir)
{
    my_putstr("ls: cannot access '");
    my_putstr(current_dir);
    my_putstr("' : ");
    perror(NULL);
    exit(84);
}
