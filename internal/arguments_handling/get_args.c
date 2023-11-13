/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** get_args.c
*/

#include <stdlib.h>
#include "../../includes/my.h"

char *get_args(int argc, char **argv)
{
    char *args = malloc(sizeof(char) * 10);

    for (int i = 0; i < argc; i++) {
        if (argv[i][0] == '-') {
            my_strcat(args, &argv[i][1]);
        }
    }
    return args;
}
