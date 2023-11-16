/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** display_sorted_args.c
*/

#include <dirent.h>
#include <grp.h>
#include <pwd.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>
#include "../../includes/my.h"
#include "../../includes/internal_file_perms.h"
#include "../../includes/internal_functions.h"

void display_long_listing(struct dirent **fs_item_list,
    __attribute__((unused)) char *args, char *current_dir)
{
    struct stat fs_item_stat;
    char *fs_item_path;

    display_total_elements_size(fs_item_list, current_dir);
    for (int i = 0; fs_item_list[i] != NULL; i++) {
        fs_item_path =
            build_fs_item_path(current_dir, fs_item_list[i]->d_name);
        stat(fs_item_path, &fs_item_stat);
        display_constant_len(&fs_item_stat);
        display_variable_len(&fs_item_stat, fs_item_list[i]);
    }
}

void format_spacing(struct dirent **fs_item_list, int i)
{
    if (fs_item_list[i + 1] != NULL)
        my_putstr("  ");
}

void display(struct dirent **fs_item_list, __attribute__((unused)) int count,
    char *args, char *current_dir)
{
    if (is_flag_present(args, 'R')) {
        my_putstr(current_dir);
        my_putstr(":\n");
    }
    if (is_flag_present(args, 'l')) {
        display_long_listing(fs_item_list, args, current_dir);
        return;
    }
    for (int i = 0; fs_item_list[i] != NULL; i++) {
        my_putstr(fs_item_list[i]->d_name);
        format_spacing(fs_item_list, i);
    }
    my_putchar('\n');
}
