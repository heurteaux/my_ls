/*
** EPITECH PROJECT, 2023
** Day06
** File description:
** task05
*/

#include <stddef.h>
#include "my.h"

char *my_strstr(char *s1, char *s2)
{
    char *h;
    char *n;

    if (*s2 == '\0') {
        return s1;
    }
    for (; *s1 != '\0'; s1++) {
        h = s1;
        n = s2;
        while (*n != '\0' && *h == *n) {
            h++;
            n++;
        }
        if (*n == '\0') {
            return s1;
        }
    }
    return NULL;
}

/*void main()
{
    char test_str[] = "idjezijfiezfizifjz";
    char *anwser = my_strstr(test_str, "");
    if (anwser != NULL) {
        printf("%s\n", anwser);
    } else {
        printf("nope\n");
    }
}
*/
