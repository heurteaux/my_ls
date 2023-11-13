/*
** EPITECH PROJECT, 2023
** Day05
** File description:
** task01
*/

#include "my.h"

int my_compute_factorial_it(int nb)
{
    int result = 1;

    if (nb < 0) {
        return 0;
    }
    if (nb > 12) {
        return 0;
    }
    while (nb > 0) {
        result *= nb;
        nb--;
    }
    return result;
}

/*void main(void)
{
    printf("%d\n",my_compute_factorial_it(12));
    }*/
