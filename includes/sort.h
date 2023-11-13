/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** sort.h
*/

#pragma once
#include <dirent.h>

void default_sort(struct dirent **fs_item_list, int nb_elements);

void reverse_array(struct dirent **fs_item_list, int nb_elements);

void sort_by_date(
    struct dirent **fs_item_list, int nb_elements, char *base_path);
