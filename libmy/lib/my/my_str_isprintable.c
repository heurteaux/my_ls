/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_str_isprintable.c
*/

int my_str_isprintable(char const *str)
{
    if (str[0] == '\0')
        return 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= ' ' && str[i] <= '~')
            continue;
        return 0;
    }
    return 1;
}

/*int main(void)
{
    char const *string = "";
    printf("%d\n", my_str_isprintable(string));
}*/
