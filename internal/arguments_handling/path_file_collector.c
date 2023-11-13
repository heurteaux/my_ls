/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** path_file_collector.c
*/

#include <stdlib.h>

char **get_path_list(int argc, char **argv)
{
    char **path_list = malloc(sizeof(char *) * argc);
    int path_list_count = 0;

    for (int i = 1; i < argc; i++) {
        if (argv[i][0] != '-') {
            path_list[path_list_count] = argv[i];
            path_list_count++;
        }
    }
    path_list[path_list_count] = NULL;
    return path_list;
}
