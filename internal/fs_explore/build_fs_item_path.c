/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** build_fs_item_path.c
*/

#include <stdlib.h>
#include "../../includes/my.h"
#include "../../includes/internal_functions.h"
#include <stdio.h>

char *build_fs_item_path(char *current_dir, char *fs_item_name)
{
    char *cleaned_current_dir = malloc(
        sizeof(char) * (my_strlen(current_dir) + my_strlen(fs_item_name) + 3));

    my_strmemset(cleaned_current_dir,
        (my_strlen(current_dir) + my_strlen(fs_item_name) + 3));
    my_strcpy(cleaned_current_dir, path_name_handling(current_dir));
    my_strcat(cleaned_current_dir, fs_item_name);
    return cleaned_current_dir;
}
