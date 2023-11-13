/*
** EPITECH PROJECT, 2023
** Day05
** File description:
** task06
*/

#include "my.h"

int my_is_prime(int nb)
{
    if (nb < 2) {
        return 0;
    }
    for (int i = 2 ; i < nb ; i++) {
        if (nb % i == 0) {
            return 0;
        }
    }
    return 1;
}

/*void main(void)
{
    printf("%d\n", my_is_prime(1178038457));
}*/
