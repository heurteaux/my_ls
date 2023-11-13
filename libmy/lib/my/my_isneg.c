/*
** EPITECH PROJECT, 2023
** Day03
** File description:
** task04
*/

#include <unistd.h>
#include "my.h"

static const int P_CHAR = 80;
static const int N_CHAR = 78;

int my_isneg(int n)
{
    if ( n >= 0 ) {
        write(1, &P_CHAR, 1);
    } else {
        write(1, &N_CHAR, 1);
    }
    return 0;
}
