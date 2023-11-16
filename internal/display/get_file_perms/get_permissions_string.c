/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** get_permissions_string.c
*/

#include <sys/stat.h>
#include <stdlib.h>
#include "../../../includes/my.h"
#include "../../../includes/internal_file_perms.h"

char *get_permisions_string(struct stat *fs_item_stat)
{
    char *result = malloc(sizeof(char) * 12);

    my_strmemset(result, 12);
    if (S_ISFIFO(fs_item_stat->st_mode))
        result[0] = '-';
    if (S_ISLNK(fs_item_stat->st_mode))
        result[0] = 'l';
    if (S_ISREG(fs_item_stat->st_mode))
        result[0] = '-';
    if (S_ISCHR(fs_item_stat->st_mode))
        result[0] = '-';
    if (S_ISDIR(fs_item_stat->st_mode))
        result[0] = 'd';
    get_owner_perms(fs_item_stat, result);
    get_group_perms(fs_item_stat, result);
    get_general_perms(fs_item_stat, result);
    result[10] = '.';
    return result;
}
