/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** default_sort.c
*/

#include <dirent.h>
#include "../../includes/my.h"
#include "../../includes/sort.h"

void sort_iteration(struct dirent **fs_item_list, int nb_elements)
{
    struct dirent *temp1;

    for (int i = 0; i < (nb_elements - 1); i++) {
        if (my_strcmp(my_strlowcase(fs_item_list[i]->d_name),
                my_strlowcase(fs_item_list[i + 1]->d_name))
            > 0) {
            temp1 = fs_item_list[i];
            fs_item_list[i] = fs_item_list[i + 1];
            fs_item_list[i + 1] = temp1;
        }
    }
}

void default_sort(struct dirent **fs_item_list, int nb_elements)
{
    if (nb_elements < 2)
        return;
    for (int i = 0; i < (nb_elements - 1); i++) {
        sort_iteration(fs_item_list, nb_elements);
    }
    reverse_array(fs_item_list, nb_elements);
}
