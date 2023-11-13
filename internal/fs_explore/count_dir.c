/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** count_dir.c
*/

#include <dirent.h>
#include <stdlib.h>

int count_dir(DIR *dir_to_count)
{
    int count = 0;
    struct dirent *temp = readdir(dir_to_count);

    if (dir_to_count) {
        while (temp != NULL) {
            count++;
            temp = readdir(dir_to_count);
        }
    }
    return count;
}
