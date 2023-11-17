/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** display_subfonctions.c
*/

#include <dirent.h>
#include <grp.h>
#include <pwd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include "../../../includes/my.h"
#include "../../../includes/internal_file_perms.h"
#include "../../../includes/internal_functions.h"

void display_constant_len(struct stat *fs_item_stat)
{
    my_putstr(get_permisions_string(fs_item_stat));
    my_putchar(' ');
    my_put_nbr((int) fs_item_stat->st_nlink);
    my_putstr(" ");
}

void display_uid(__uid_t uid)
{
    struct passwd *psswd_info;

    psswd_info = getpwuid(uid);
    my_putstr(psswd_info->pw_name);
    my_putchar(' ');
}

void display_gid(__gid_t gid)
{
    struct group *group;

    group = getgrgid(gid);
    my_putstr(group->gr_name);
    my_putchar(' ');
}

int epoch_to_year(long int epoch_time)
{
    return epoch_time / 31536000 + 1969;
}

void display_variable_len(struct stat *fs_item_stat, struct dirent *fs_item)
{
    display_uid(fs_item_stat->st_uid);
    display_gid(fs_item_stat->st_gid);
    my_put_nbr((int) fs_item_stat->st_size);
    my_putchar(' ');
    my_putstr(str_to_date_array(ctime(&fs_item_stat->st_mtim.tv_sec))[2]);
    my_putstr(" ");
    my_putstr(str_to_date_array(ctime(&fs_item_stat->st_mtim.tv_sec))[1]);
    my_putchar(' ');
    if (epoch_to_year(fs_item_stat->st_mtim.tv_sec)
        == epoch_to_year(time(NULL))) {
        my_putstr(parse_date(
            str_to_date_array(ctime(&fs_item_stat->st_mtim.tv_sec))[3]));
    } else {
        my_put_nbr(epoch_to_year(fs_item_stat->st_mtim.tv_sec));
    }
    my_putchar(' ');
    my_putstr(fs_item->d_name);
    my_putchar('\n');
}
