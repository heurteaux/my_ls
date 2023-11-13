/*
** EPITECH PROJECT, 2023
** Day05
** File description:
** task05
*/

#include <limits.h>
#include "my.h"

int my_compute_square_root(int nb)
{
    if (nb == 1) {
        return 1;
    }
    if (nb < 1) {
        return 0;
    }
    for (int i = 0 ; i < nb ; i++) {
        if (i * i == nb) {
            return i;
        }
    }
    return 0;
}

/*void main(void)
{
    printf("%d\n", my_compute_square_root(9));
}*/
