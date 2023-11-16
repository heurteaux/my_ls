/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** display_total_elements_size.c
*/

#include <dirent.h>
#include <stdlib.h>
#include <sys/stat.h>
#include "../../../includes/my.h"
#include "../../../includes/internal_functions.h"

void display_total_elements_size(
    struct dirent **fs_item_list, char *current_dir)
{
    struct stat fs_item_stat;
    char *fs_item_path;
    int total_size = 0;

    for (int i = 0; fs_item_list[i] != NULL; i++) {
        fs_item_path =
            build_fs_item_path(current_dir, fs_item_list[i]->d_name);
        stat(fs_item_path, &fs_item_stat);
        total_size += fs_item_stat.st_blocks / 2;
    }
    my_putstr("total ");
    my_put_nbr(total_size);
    my_putchar('\n');
}
