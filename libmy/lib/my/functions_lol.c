/*
** EPITECH PROJECT, 2023
** Day03
** File description:
** task6
*/

#include <unistd.h>
#include "my.h"

static int get_diviseur(int len)
{
    int a = 1;

    for (int i = 0; i < len - 1; i++)
        a *= 10;
    return a;
}

void for_positive(int nb, int arg_length, long result_holder)
{
    for (int i = 0; i < arg_length; i++) {
        result_holder = nb / get_diviseur(arg_length - i) % 10 + 48;
        write(1, &result_holder, 1);
    }
}

void for_negative(long nb, int arg_length, long result_holder)
{
    for (int i = 0; i < arg_length; i++) {
        result_holder = (nb * (-1)) / get_diviseur(arg_length - i) % 10 + 48;
        write(1, &result_holder, 1);
    }
}
