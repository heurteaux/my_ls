/*
** EPITECH PROJECT, 2023
** putchar
** File description:
** outchar
*/

#include <unistd.h>
#include "my.h"

void my_putchar(char a)
{
    write(1, &a, 1);
}
