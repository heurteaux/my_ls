/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** path_name_handling.c
*/

#include <malloc.h>
#include <stdio.h>
#include "../../includes/my.h"
#include "../../includes/data_strucs.h"
#include "../../includes/internal_functions.h"

char *get_dir_path(char *current_dir, struct dirent **fs_item_list, int i)
{
    int temp_len;
    char *current_dir_copy;

    temp_len =
        (my_strlen(current_dir) + my_strlen(fs_item_list[i]->d_name) + 2);
    current_dir_copy = malloc(sizeof(char) * temp_len);
    for (int n = 0; n < temp_len; n++) {
        current_dir_copy[n] = '\0';
    }
    my_strcpy(current_dir_copy, path_name_handling(current_dir));
    return current_dir_copy;
}

char *path_name_handling(char *path_name)
{
    int len = (my_strlen(path_name) + 2);
    char *path_name_copy = malloc(sizeof(char) * len);

    for (int i = 0; i < len; i++) {
        path_name_copy[i] = '\0';
    }
    my_strcpy(path_name_copy, path_name);
    if (path_name[my_strlen(path_name) - 1] != '/') {
        my_strcat(path_name_copy, "/");
    }
    return path_name_copy;
}
