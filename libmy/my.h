/*
** EPITECH PROJECT, 2023
** Day09
** File description:
** my.h
*/

#pragma once

void my_putchar(char c);

int my_isneg(int nb);

int my_put_nbr(int nb);

void my_swap(int *a, int *b);

int my_putstr(char const *str);

void my_puterr(char *str);

int my_print_alpha(void);

int my_strlen(char const *str);

int my_getnbr(char *str);

int my_getnbr_wrd_strt(char *str);

void my_sort_int_array(int *tab, int size);

int my_compute_factorial_it(int nb);

int my_compute_factorial_rec(int nb);

int my_compute_power_it(int nb, int power);

char *my_evil_str(char *str);

int my_compute_power_rec(int nb, int power);

int my_compute_square_root(int nb);

int my_is_prime(int nb);

int my_find_prime_sup(int nb);

char *my_strcpy(char *dest, char const *src);

char *mystrncpy(char *dest, char const *src, int n);

char *my_revstr(char *str);

char *my_strstr(char *haystack, char *needle);

int my_strcmp(char const *s1, char const *s2);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strupcase(char *str);

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str);

int my_str_isalpha(char const *str);

int my_str_isnum(char const *str);

int my_str_islower(char const *str);

int my_str_isupper(char const *str);

int my_str_isprintable(char const *str);

int my_showstr(char const *str);

int my_showmem(char const *str, int size);

char *my_strcat(char *dest, char const *src);

char *my_strncat(char *dest, char const *src, int nb);

void for_positive(int a, int b, long c);

void for_negative(long a, int b, long c);

char **my_str_to_word_array(char const *str);

char *my_strdup(char const *str);

int my_print_comb(void);

void my_print_digits(void);

void my_print_revalpha(void);

char *my_strncpy(char *dest, char const *src, int nb);

void
for_positive_b(long nb, int arg_length, long result_holder, char *base_str);

void
for_negative_b(long nb, int arg_length, long result_holder, char *base_str);

int my_put_nbr_base(int nb, char *base_str);

int is_alphanum(char a);

int my_str_islower(char const *str);

int my_str_isnum(char const *str);

int my_str_isupper(char const *str);

int my_str_isalpha(char const *str);

int my_str_isprintable(char const *str);
