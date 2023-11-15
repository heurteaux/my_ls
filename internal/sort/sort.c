/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** sort.c
*/

#include "../../includes/sort.h"
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../includes/internal_functions.h"

int count_nb_elements(struct dirent **fs_item_list)
{
    int i = 0;

    while (fs_item_list[i] != NULL) {
        i++;
    }
    return i;
}

struct dirent **sort(struct dirent **fs_item_list, char *args, char *base_path)
{
    bool is_sorted = false;
    int nb_elements = count_nb_elements(fs_item_list);

    if (is_flag_present(args, 't')) {
        sort_by_date(fs_item_list, nb_elements, base_path);
        is_sorted = true;
    }
    if (!is_sorted)
        default_sort(fs_item_list, nb_elements);
    if (is_flag_present(args, 'r'))
        fs_item_list = reverse_array(fs_item_list, nb_elements);
    return fs_item_list;
}
