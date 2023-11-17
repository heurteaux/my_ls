/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** read_entry_directory.c
*/

#include <dirent.h>
#include <stdbool.h>
#include <stdlib.h>
#include "../../includes/my.h"
#include "../../includes/internal_functions.h"

bool is_present_in_path_list(char **path_list, char *fs_item_name)
{
    for (int i = 0; path_list[i] != NULL; i++) {
        if (my_strcmp(path_list[i], fs_item_name) == 0)
            return true;
    }
    return false;
}

void read_entry_directory(struct dirent *fs_item, struct dirent **fs_item_list,
    int *count, args_path_list_passing *args_path_list)
{
    char *args = args_path_list->args;
    char **path_list = args_path_list->path_list;

    if (is_flag_present(args, 'd')) {
        if (is_present_in_path_list(path_list, fs_item->d_name)) {
            fs_item_list[*count] = fs_item;
            *count += 1;
        }
    }
    if (fs_item->d_name[0] == '.') {
        if (is_flag_present(args, 'a')) {
            fs_item_list[*count] = fs_item;
            *count += 1;
        }
    } else {
        fs_item_list[*count] = fs_item;
        *count += 1;
    }
}
