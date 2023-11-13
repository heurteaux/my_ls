/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_str_isnum.c
*/

int my_str_isnum(char const *str)
{
    if (str[0] == '\0')
        return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= '9' && str[i] >= '0')
            continue;
        return 0;
    }
    return 1;
}

/*int main(void)
{
    char const *string = "1234a567890";
    printf("%d\n", my_str_isnum(string));
}*/
