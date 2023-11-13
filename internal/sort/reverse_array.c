/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** reverse_array.c
*/

#include <dirent.h>

void reverse_array(struct dirent **fs_item_list, int nb_elements)
{
    struct dirent *holder;
    int len = nb_elements - 1;

    for (int i = 0 ; i < len / 2 ; i++) {
        holder = fs_item_list[i];
        fs_item_list[i] = fs_item_list[len - i];
        fs_item_list[len - i] = holder;
    }
}
