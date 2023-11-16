/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** get_group_perms.c
*/

#include <sys/stat.h>

void get_group_perms(struct stat *fs_item_stat, char *result)
{
    result[4] = (fs_item_stat->st_mode & S_IRGRP) ? 'r' : '-';
    result[5] = (fs_item_stat->st_mode & S_IWGRP) ? 'w' : '-';
    result[6] = (fs_item_stat->st_mode & S_IXGRP) ? 'x' : '-';
}
