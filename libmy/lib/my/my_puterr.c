/*
** EPITECH PROJECT, 2023
** myputerr
** File description:
** myputerr
*/

#include <unistd.h>
#include "my.h"

void my_puterr(char *str)
{
    write(2, str, my_strlen(str));
}
