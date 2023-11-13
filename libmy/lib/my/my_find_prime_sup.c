/*
** EPITECH PROJECT, 2023
** Day05
** File description:
** task07
*/

#include <limits.h>
#include "my.h"

int my_find_prime_sup(int nb)
{
    if (my_is_prime(nb) == 1) {
        return nb;
    }
    for (long i = 1 ; i > 0 ; i++) {
        if (nb + i == INT_MAX && my_is_prime(nb + 1) != 1) {
            return 0;
        }
        if (my_is_prime(nb + i) == 1) {
            return nb + i;
        }
    }
    return 0;
}

/*void main(void)
{
    printf("%d\n", my_find_prime_sup(INT_MIN));
}*/
