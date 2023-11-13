/*
** EPITECH PROJECT, 2023
** Day06
** File description:
** task03
*/

#include "my.h"

char *my_revstr(char *str)
{
    char holder;
    int len = my_strlen(str) - 1;

    for (int i = 0 ; i < len / 2 ; i++) {
        holder = str[i];
        str[i] = str[len - i];
        str[len - i] = holder;
    }
    return str;
}

/*void main()
{
    char str[] = "ijzdijdiedijediejdijfjffn<xxxx";
    printf("%s\n", str);
    char *str_holder = my_revstr(str);
    printf("%s\n", str);
    printf("%s\n", str_holder);
    }*/
