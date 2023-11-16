/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** get_owner_perms.c
*/

#include <sys/stat.h>
#include <stdio.h>

void get_owner_perms(struct stat *fs_item_stat, char *result)
{
    result[1] = (fs_item_stat->st_mode & S_IRUSR) ? 'r' : '-';
    result[2] = (fs_item_stat->st_mode & S_IWUSR) ? 'w' : '-';
    result[3] = (fs_item_stat->st_mode & S_IWUSR) ? 'x' : '-';
}
