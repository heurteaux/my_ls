/*
** EPITECH PROJECT, 2023
** Day06
** File description:
** task02
*/

#include <unistd.h>
#include "my.h"

//char const RTRN = '\n';

char *my_strncpy(char *dest, char const *src, int n)
{
    for (int i = 0 ; i < n ; i++) {
        if (dest[i + 1] == '\0') {
            dest[i] = src[i];
            dest[i + 1] = '\0';
            return dest;
        }
        if (src[i] == '\0') {
            dest[i] = '\0';
            break;
        }
        dest[i] = src[i];
    }
    return dest;
}

/*void read_str(char *str)
{
    for (int i = 0 ; str[i] != '\0' ; i++) {
        write(1, &str[i], 1);
    }
    write(1, &RTRN, 1);
}

void main()
{
    char *str_src = "ufzhezjfezfijfezfjfijifzjfizjjfizjifizjfizjfizjfz";
    char str_dest[] = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA";
    //read_str(str_src);
    //read_str(str_dest);
    char *str_new_dest = my_strncpy(str_dest, str_src, 2021);
    //read_str(str_dest);
    read_str(str_new_dest);
    //read_str(str_src);
    }*/
