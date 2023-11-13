/*
** EPITECH PROJECT, 2023
** Day04
** File description:
** task02
*/

#include <unistd.h>
#include "my.h"

int my_putstr(char const *str)
{
    for (int i = 0 ; str[i] != '\0' ; i++ ) {
        write(1, &str[i], 1);
    }
    return 0;
}
