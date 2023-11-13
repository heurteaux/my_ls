/*
** EPITECH PROJECT, 2023
** Day05
** File description:
** task04
*/

#include <limits.h>

int my_compute_power_rec(int nb, int p)
{
    if (p < 0) {
        return 0;
    }
    if (p == 0) {
        return 1;
    }
    return nb * my_compute_power_rec(nb, p - 1);
}

/*void main()
{
    printf("%d\n", my_compute_power_rec(-13, 0));
}*/
