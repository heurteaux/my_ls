/*
** EPITECH PROJECT, 2023
** day03
** File description:
** taksk03
*/
#include <unistd.h>
#include "my.h"

void my_print_digits(void)
{
    for (unsigned int i = 48; i <= 57; i++) {
        write(1, &i, 1);
    }
}
