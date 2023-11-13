/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** my_ls.c
*/

#include <dirent.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "libmy/my.h"
#include "includes/internal_functions.h"

void my_ls(char *current_dir, char *args)
{
    int count = 0;
    DIR *dir_content = opendir(current_dir);
    DIR *dir_to_count = opendir(current_dir);
    struct dirent *fs_item = readdir(dir_content);
    struct dirent **fs_item_list =
        malloc(sizeof(struct dirent) * (count_dir(dir_to_count) + 1));

    if (dir_content) {
        for (int i = 0; fs_item != NULL; i++) {
            read_entry_directory(fs_item, fs_item_list, &count, args);
            fs_item = readdir(dir_content);
        }
        fs_item_list[count] = NULL;
    } else {
        on_invalid_path(current_dir);
    }
    sort(fs_item_list, args, current_dir);
    display(fs_item_list, count);
}

void arguments_collector(int argc, char **argv)
{
    char *args = get_args(argc, argv);
    char **path_list = get_path_list(argc, argv);

    if (path_list[0] == NULL) {
        my_ls(".", args);
        return;
    }
    for (int i = 0; path_list[i] != NULL; i++) {
        my_ls(path_list[i], args);
    }
}
