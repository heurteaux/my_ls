/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_str_isalpha.c
*/

int my_str_isalpha(char const *str)
{
    if (str[0] == '\0') {
        return 0;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] <= 'z' && str[i] >= 'a') {
            continue;
        }
        if (str[i] <= 'Z' && str[i] >= 'A') {
            continue;
        }
        if (str[i] <= '9' && str[i] >= '0') {
            continue;
        }
        return 0;
    }
    return 1;
}

/*
int main(void)
{
    char *string = "";
    printf("%d\n", my_str_isalpha(string));
}
*/
