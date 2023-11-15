/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** sort_by_date.c
*/

#include <dirent.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/stat.h>
#include "../../includes/my.h"
#include "../../includes/sort.h"

char *prepare_path_string(char *base_path)
{
    char *result = malloc(sizeof(char) * (my_strlen(base_path) + 1));
    int len = (my_strlen(base_path) + 1);
    char *parsed_base_path = malloc(sizeof(char) * len);
    int i = 0;

    for (int n = 0; n < (my_strlen(base_path) + 10); n++) {
        result[n] = '\0';
    }
    for (int n = 0; n < len; n++) {
        parsed_base_path[n] = '\0';
    }
    for (; base_path[i] != '\0'; i++) {
        parsed_base_path[i] = base_path[i];
        if (base_path[i] == '/') {
            break;
        }
    }
    if (base_path[i] != '/') {
        my_strcat(parsed_base_path, "/");
    }
    my_strcpy(result, parsed_base_path);
    return result;
}

static void sort_by_date_iterate(
    struct dirent **fs_item_list, int nb_elements, char *base_path)
{
    char *temp = malloc(sizeof(char) * my_strlen(base_path));
    struct dirent *temp_dirent;
    struct stat *file_stat_1 = malloc(sizeof(struct stat));
    struct stat *file_stat_2 = malloc(sizeof(struct stat));

    for (int i = 0; (i + 1) < nb_elements; i++) {
        temp = prepare_path_string(base_path);
        my_strcat(temp, fs_item_list[i]->d_name);
        lstat(temp, file_stat_1);
        temp = prepare_path_string(base_path);
        my_strcat(temp, fs_item_list[i + 1]->d_name);
        lstat(temp, file_stat_2);
        if (file_stat_1->st_mtim.tv_sec < file_stat_2->st_mtim.tv_sec) {
            temp_dirent = fs_item_list[i];
            fs_item_list[i] = fs_item_list[i + 1];
            fs_item_list[i + 1] = temp_dirent;
        }
    }
}

void sort_by_date(
    struct dirent **fs_item_list, int nb_elements, char *base_path)
{
    for (int i = 0; i < nb_elements; i++) {
        sort_by_date_iterate(fs_item_list, nb_elements, base_path);
    }
}
