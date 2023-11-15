/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** reverse_array.c
*/

#include <dirent.h>
#include <stdlib.h>
#include <stdio.h>

struct dirent **reverse_array(struct dirent **fs_item_list, int nb_elements)
{
    struct dirent **holder =
        malloc(sizeof(struct dirent *) * (nb_elements + 1));
    int count = 0;

    for (int i = (nb_elements - 1); i >= 0; i--) {
        holder[count] = fs_item_list[i];
        count++;
    }
    holder[count] = NULL;
    return holder;
}
