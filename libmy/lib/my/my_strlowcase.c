/*
** EPITECH PROJECT, 2023
** Day06
** File description:
** task08
*/

#include <stdlib.h>
#include "my.h"

char *my_strlowcase(char *str)
{
    char *temp = malloc(sizeof(char) * my_strlen(str));

    my_strcpy(temp, str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] > 64 && str[i] < 91) {
            temp[i] += 32;
        }
    }
    return temp;
}

/*void main()
{
    char to_uppercase[] = "AZè-(e-é_àç&_zaàçduaçdazàdç_éagsuà";
    printf("%s\n", to_uppercase);
    my_strlowcase(to_uppercase);
    printf("%s\n", to_uppercase);
    }*/
