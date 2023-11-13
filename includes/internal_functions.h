/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** internal_functions.h
*/

#pragma once
#include <dirent.h>
#include <stdbool.h>

int count_dir(DIR *dir_to_count);

void on_invalid_path(char *current_dir);

char *get_args(int argc, char **argv);

char **get_path_list(int argc, char **argv);

void read_entry_directory(struct dirent *fs_item, struct dirent **fs_item_list,
    int *count, char *args);

bool is_flag_present(char *args, char flag);

void display(struct dirent **fs_item_list, int count);

void sort(struct dirent **fs_item_list, char *args, char *base_path);
