/*
** EPITECH PROJECT, 2023
** Day06
** File description:
** task10
*/

#include "my.h"

static int is_number(char to_test)
{
    if (to_test >= '0' && to_test <= '9') {
        return 1;
    }
    return 0;
}

static int is_letter(char a)
{
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
        return 1;
    }
    return 0;
}

char *my_strcapitalize(char *str)
{
    my_strlowcase(str);
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_number(str[i - 1]) == 1) {
            continue;
        }
        if (is_letter(str[i - 1]) == 0 && is_letter(str[i]) == 1)
            str[i] -= 32;
    }
    return str;
}

/*int main(void)
{
    char test[] = "hey, how are you? 42WORds forty-two; fifty+one";
    printf("%s\n", test);
    my_strcapitalize(test);
    printf("%s\n", test);
}*/
