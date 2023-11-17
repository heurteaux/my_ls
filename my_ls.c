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
#include <string.h>
#include <sys/stat.h>
#include "libmy/my.h"
#include "includes/data_strucs.h"
#include "includes/internal_functions.h"

static DIR **init_dir_var(char *current_dir)
{
    DIR **dir_content = malloc(sizeof(DIR *) * 2);

    dir_content[0] = opendir(current_dir);
    dir_content[1] = opendir(current_dir);
    return dir_content;
}

struct dirent *init_and_readdir(DIR *dir_content)
{
    return dir_content ? readdir(dir_content) : NULL;
}

static struct dirent **build_fs_item_list(DIR **dir_content, int *count,
    char *current_dir, args_path_list_passing *args_path_list)
{
    struct dirent *fs_item = init_and_readdir(dir_content[0]);
    struct dirent **fs_item_list =
        malloc(sizeof(struct dirent) * (count_dir(dir_content[1]) + 1));

    if (dir_content[0]) {
        for (int i = 0; fs_item != NULL; i++) {
            read_entry_directory(fs_item, fs_item_list, count, args_path_list);
            fs_item = init_and_readdir(dir_content[0]);
        }
        fs_item_list[*count] = NULL;
    } else {
        on_invalid_path(current_dir);
    }
    return fs_item_list;
}

static void my_ls(char *current_dir, char *args, char **path_list)
{
    int count = 0;
    DIR **dir_content = init_dir_var(current_dir);
    args_path_list_passing *args_path_list =
        malloc(sizeof(args_path_list_passing *) * 1);
    struct dirent **fs_item_list;

    args_path_list->args = args;
    args_path_list->path_list = path_list;
    fs_item_list =
        build_fs_item_list(dir_content, &count, current_dir, args_path_list);
    fs_item_list = sort(fs_item_list, args, current_dir);
    display(fs_item_list, count, args, current_dir);
    recursive_check(current_dir, args, fs_item_list);
}

bool check_forbiden_dir(char *dir_name)
{
    return (my_strcmp(dir_name, ".") != 0 && my_strcmp(dir_name, "..") != 0);
}

void recursive_call(
    struct dirent **fs_item_list, char *current_dir, int i, char *args)
{
    char *current_dir_copy;

    if (fs_item_list[i]->d_type == DT_DIR
        && check_forbiden_dir(fs_item_list[i]->d_name)) {
        my_putchar('\n');
        current_dir_copy = get_dir_path(current_dir, fs_item_list, i);
        my_strcat(current_dir_copy, fs_item_list[i]->d_name);
        my_ls(current_dir_copy, args, NULL);
    }
}

void recursive_check(
    char *current_dir, char *args, struct dirent **fs_item_list)
{
    if (is_flag_present(args, RECURSIVE_FLAG)) {
        for (int i = 0; fs_item_list[i] != NULL; i++) {
            recursive_call(fs_item_list, current_dir, i, args);
        }
    }
}

void arguments_collector(int argc, char **argv)
{
    char *args = get_args(argc, argv);
    char **path_list = get_path_list(argc, argv);

    if (path_list[0] == NULL || is_flag_present(args, 'd')) {
        my_ls(".", args, path_list);
        return;
    }
    for (int i = 0; path_list[i] != NULL; i++) {
        my_ls(path_list[i], args, path_list);
    }
}
