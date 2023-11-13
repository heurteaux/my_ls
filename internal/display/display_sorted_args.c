/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** display_sorted_args.c
*/

#include <dirent.h>
#include "../../includes/my.h"

void display(struct dirent **fs_item_list, int count)
{
    for (int i = (count - 1); i >= 0; i--) {
        my_putstr(fs_item_list[i]->d_name);
        if (i > 0)
            my_putstr("  ");
    }
    my_putstr("\n");
}
