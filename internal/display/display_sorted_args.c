/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** display_sorted_args.c
*/

#include <dirent.h>
#include "../../includes/my.h"
#include "../../includes/internal_functions.h"
#include <stdlib.h>

void display(struct dirent **fs_item_list, int count, char *args, char *current_dir)
{
    if (is_flag_present(args, 'R')) {
        my_putstr(current_dir);
        my_putstr(":\n");
    }
    for (int i = 0; fs_item_list[i] != NULL; i++) {
        my_putstr(fs_item_list[i]->d_name);
        if (i < count)
            my_putstr("  ");
    }
    my_putstr("\n\n");
}
