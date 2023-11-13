/*
** EPITECH PROJECT, 2023
** Day05
** File description:
** task03
*/

#include <limits.h>
#include "my.h"

int my_compute_power_it(int nb, int p)
{
    int result = 1;

    if (p < 0) {
        return 0;
    }
    if (p == 0) {
        return 1;
    }
    for (int i = p; i > 0; i--) {
        if (nb > 0 && result > INT_MAX / nb)
            return 0;
        if (nb < 0 && (result * (-1)) > INT_MIN / nb)
            return 0;
        result *= nb;
    }
    return result;
}

/*void main(void)
{
    printf("%d\n", my_compute_power_it(-14, 2));
}*/
