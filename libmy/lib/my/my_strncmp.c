/*
** EPITECH PROJECT, 2023
** Day06
** File description:
** task07
*/

#include "my.h"

int my_strncmp(char const *s1, char const *s2, int n)
{
    for (int i = 0; ((s1[i] != '\0') || (s2[i] != '\0')) && i < n; i++) {
        if (s1[i] != s2[i]) {
            return s1[i] - s2[i];
        }
    }
    return 0;
}

/*void main()
{
    char *str1 = "testestts";
    char *str2 = "testdsqd";
    int result = my_strncmp(str1, str2, 3);
    printf("%d\n", result);
}*/
