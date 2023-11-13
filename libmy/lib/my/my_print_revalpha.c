/*
** EPITECH PROJECT, 2023
** day03
** File description:
** taksk01
*/
#include <unistd.h>
#include "my.h"

void my_print_revalpha(void)
{
    for (unsigned int i = 122; i >= 97; i--) {
        write(1, &i, 1);
    }
}
