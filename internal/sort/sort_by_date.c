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

    my_strmemset(result, (my_strlen(base_path) + 1));
    my_strmemset(parsed_base_path, len);
    for (; base_path[i] != '\0'; i++) {
        parsed_base_path[i] = base_path[i];
        if (base_path[i] == '/' && base_path[i - 1] == '/') {
            break;
        }
    }
    if (base_path[i] != '/') {
        my_strcat(parsed_base_path, "/");
    }
    my_strcpy(result, parsed_base_path);
    return result;
}

static void sort_two_alphabetically(struct dirent **fs_item_list, int i)
{
    char *lowcase_1 = my_strlowcase(fs_item_list[i]->d_name);
    char *lowcase_2 = my_strlowcase(fs_item_list[i + 1]->d_name);
    struct dirent *temp1;

    if (my_strcmp(lowcase_1, lowcase_2) > 0) {
        temp1 = fs_item_list[i];
        fs_item_list[i] = fs_item_list[i + 1];
        fs_item_list[i + 1] = temp1;
    }
    free(lowcase_1);
    free(lowcase_2);
}

static void swap_on_tv_sec(struct dirent **fs_item_list, int i)
{
    struct dirent *temp_dirent;

    temp_dirent = fs_item_list[i];
    fs_item_list[i] = fs_item_list[i + 1];
    fs_item_list[i + 1] = temp_dirent;
}

static void sort_by_date_iterate(
    struct dirent **fs_item_list, int nb_elements, char *base_path)
{
    char *temp = malloc(sizeof(char) * my_strlen(base_path));
    struct stat *file_stat_1 = malloc(sizeof(struct stat));
    struct stat *file_stat_2 = malloc(sizeof(struct stat));

    for (int i = 0; (i + 1) < nb_elements; i++) {
        temp = prepare_path_string(base_path);
        my_strcat(temp, fs_item_list[i]->d_name);
        lstat(temp, file_stat_1);
        temp = prepare_path_string(base_path);
        my_strcat(temp, fs_item_list[i + 1]->d_name);
        lstat(temp, file_stat_2);
        if (file_stat_1->st_mtim.tv_sec == file_stat_2->st_mtim.tv_sec) {
            sort_two_alphabetically(fs_item_list, i);
            continue;
        }
        if (file_stat_1->st_mtim.tv_sec < file_stat_2->st_mtim.tv_sec) {
            swap_on_tv_sec(fs_item_list, i);
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
