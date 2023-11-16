/*
** EPITECH PROJECT, 2023
** my_ls
** File description:
** internal_file_perms.h
*/

#pragma once

#include <sys/stat.h>

void get_general_perms(struct stat *fs_item_stat, char *result);

void get_group_perms(struct stat *fs_item_stat, char *result);

void get_owner_perms(struct stat *fs_item_stat, char *result);

char *get_permisions_string(struct stat *fs_item_stat);
