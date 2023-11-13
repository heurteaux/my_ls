/*
** EPITECH PROJECT, 2023
** Day03
** File description:
** task05
*/

#include <unistd.h>
#include "my.h"

static const int COMMA_INT = 44;
static const int SPACE_INT = 32;



static void print_the_thing(int a, int b, int c)
{
    int a_ascii = a + 48;
    int b_ascii = b + 48;
    int c_ascii = c + 48;

    write(1, &c_ascii, 1);
    write(1, &b_ascii, 1);
    write(1, &a_ascii, 1);
}

static void if_everything_different(int i, int n, int u)
{
    if ( u != n && u != i && i != n ) {
        if ( !( u > n && n > i) ) {
            return;
        }
        if ( u == 9 && n == 8 && i == 7 ) {
            print_the_thing(u, n, i);
            return;
        }
        print_the_thing(u, n, i);
        write(1, &COMMA_INT, 1);
        write(1, &SPACE_INT, 1);
    }
}

static void for_loop_naze(int i, int n)
{
    for (int u = 0 ; u < 10 ; u++) {
        if_everything_different(i, n, u);
    }
}

int my_print_comb(void)
{
    for (int i = 0 ; i < 10 ; i++) {
        for (int n = 0 ; n < 10 ; n++) {
            for_loop_naze(i, n);
        }
    }
    return 0;
}
