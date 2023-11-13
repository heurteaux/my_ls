/*
** EPITECH PROJECT, 2023
** Day05
** File description:
** task02
*/

#include "my.h"

int my_compute_factorial_rec(int nb)
{
    if (nb > 12) {
        return 0;
    }
    if (nb < 0) {
        return 0;
    }
    if (nb < 1) {
        return 1;
    }
    return nb * my_compute_factorial_rec(nb - 1);
}
