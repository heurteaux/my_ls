/*
** EPITECH PROJECT, 2023
** Day04
** File description:
** task06
*/

#include "my.h"

static void itr_on_array(int *array, int size)
{
    int holder;

    for (int i = 0; i + 1 < size ; i++) {
        if (array[i] > array[i + 1]) {
            holder = array[i];
            array[i] = array[i + 1];
            array[i + 1] = holder;
        }
    }
}

void my_sort_int_array(int *array, int size)
{
    if (size < 1) {
        return;
    }
    for (int n = 0; n < size ; n++) {
        itr_on_array(array, size);
    }
}

/*void main(void)
{
    int array[] =  {1, 19, 20, 10, 29, 2, 4};
    my_sort_int_array(array, 7);

    for (int i = 0 ; i < 7 ; i++) {
        printf("%d, ", array[i]);
    }
}*/
