/*
** EPITECH PROJECT, 2023
** Day03
** File description:
** displays a given int
*/

#include <unistd.h>
#include "my.h"

static const int ZERO = 48;

static int int_length(int a, int base)
{
    int div_res = a;
    int counter = 0;

    if (a < 0) {
        while (div_res != 0) {
            div_res = (div_res / base);
            counter++;
        }
    } else {
        while (div_res != 0) {
            div_res = (div_res / base);
            counter++;
        }
    }
    return counter;
}

int my_put_nbr_base(int nb_origin, char *base_str)
{
    int base = my_strlen(base_str);
    int arg_length = int_length(nb_origin, base);
    long result_holder = 0;
    long nb = nb_origin;

    if (nb == 0) {
        write(1, &ZERO, 1);
        return 0;
    }
    if (nb > 0) {
        for_positive_b(nb, arg_length, result_holder, base_str);
    } else if (nb < 0) {
        write(1, "-", 1);
        for_negative_b(nb, arg_length, result_holder, base_str);
    }
    return 84;
}

/*void main(void) {
    my_put_nbr_base(0, "0123456789ABCDEF");
}*/
