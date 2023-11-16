/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** get_general_perms.c
*/

#include <sys/stat.h>

void get_general_perms(struct stat *fs_item_stat, char *result)
{
    result[7] = (fs_item_stat->st_mode & S_IROTH) ? 'r' : '-';
    result[8] = (fs_item_stat->st_mode & S_IWOTH) ? 'w' : '-';
    result[9] = (fs_item_stat->st_mode & S_IXOTH) ? 'x' : '-';
}
