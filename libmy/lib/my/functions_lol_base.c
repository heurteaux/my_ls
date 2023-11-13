/*
** EPITECH PROJECT, 2023
** Day03
** File description:
** task6
*/

#include "my.h"

static int get_diviseur(int len, int base)
{
    int a = 1;

    for (int i = 0; i < len - 1; i++)
        a *= base;
    return a;
}

void
for_positive_b(long nb, int arg_length, long result_holder, char *base_str)
{
    int base = my_strlen(base_str);

    for (int i = 0; i < arg_length; i++) {
        result_holder = nb / get_diviseur(arg_length - i, base) % base;
        my_putchar(base_str[result_holder]);
    }
}

void
for_negative_b(long nb, int arg_length, long result_holder, char *base_str)
{
    int bs = my_strlen(base_str);

    for (int i = 0; i < arg_length; i++) {
        result_holder = (nb * (-1)) / get_diviseur(arg_length - i, bs) % bs;
        my_putchar(base_str[result_holder]);
    }
}
