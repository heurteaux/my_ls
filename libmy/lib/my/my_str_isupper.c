/*
** EPITECH PROJECT, 2023
** libmy
** File description:
** my_str_isupper.c
*/

static int is_letter(char a)
{
    if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {
        return 1;
    }
    return 0;
}

int my_str_isupper(char const *str)
{
    if (str[0] == '\0')
        return 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (is_letter(str[i]) == 1 && str[i] <= 'Z' && str[i] >= 'A') {
            continue;
        }
        if (is_letter(str[i]) == 0)
            continue;
        return 0;
    }
    return 1;
}

/*
int main(void)
{
    char const *string = "ABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890&'*ù$^p";
    printf("%d\n", my_str_isupper(string));
}
*/
