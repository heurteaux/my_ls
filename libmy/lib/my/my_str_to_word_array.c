/*
** EPITECH PROJECT, 2023
** Day08
** File description:
** task04
*/

#include <stdlib.h>
#include "my.h"

int is_alphanum(char a)
{
    if ((a > 47 && a < 58) || (a > 64 && a < 91))
        return 1;
    if (a > 96 && a < 123)
        return 1;
    return 0;
}

int count_words(char const *str)
{
    int word_count = 0;

    for (int i = 0; str[i] != '\0' ; i++) {
        if (is_alphanum(str[i]) == 1 && (!is_alphanum(str[i - 1])) == 1) {
            word_count++;
        }
    }
    return word_count;
}

int get_word_len(char const *str)
{
    int char_count = 0;

    for (int i = 0 ; is_alphanum(str[i]) == 1; i++) {
        char_count++;
    }
    return char_count;
}

char *get_word(char const *str)
{
    int len = get_word_len(str);
    char *result = malloc(sizeof(char) * (len + 1));

    for (int i = 0 ; i < len ; i++) {
        result[i] = str[i];
    }
    return result;
}

char **my_str_to_word_array(char const *str)
{
    int word_count = count_words(str);
    char **array = malloc(sizeof(char *) * (word_count) + 10);
    int count = 0;

    if (word_count == 0) {
        return malloc(sizeof(char *));
    }
    array[word_count + 1] = NULL;
    for (int i = 0 ; str[i] != '\0' ; i++) {
        if (is_alphanum(str[i]) == 1 && !(is_alphanum(str[i - 1]) == 1)) {
            array[count] = get_word(&str[i]);
            count++;
        }
    }
    return array;
}


/*int main()
{
    char *string = "azlka--&&oaksz*";
    char **result = my_str_to_word_array(string);
    for (int i = 0; result[i] != NULL ; i++) {
        my_putstr(result[i]);
        my_putstr("\n");
    }
    }*/
