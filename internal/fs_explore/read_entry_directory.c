/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** read_entry_directory.c
*/

#include <dirent.h>
#include <stdlib.h>
#include "../../includes/internal_functions.h"

void read_entry_directory(struct dirent *fs_item, struct dirent **fs_item_list,
    int *count, char *args)
{
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
