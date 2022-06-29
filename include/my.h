/*
** EPITECH PROJECT, 2021
** my h
** File description:
** generic lib
*/

#ifndef HEADER_MYH
    #define HEADER_MYH

    void my_putchar(char c);
    void my_swap(int *a, int *b);
    void my_sort_int_array(int *array, int size);
    int my_skip_space(char *str, int i);
    int my_isneg(int nb);
    int my_put_nbr(int nb);
    int my_putstr(char const *str);
    int my_strlen(char const *str);
    int my_getnbr(char const *str);
    int my_compute_power_rec(int nb, int power);
    int my_compute_square_root(int nb);
    int my_is_prime(int nb);
    int my_find_prime_sup(int nb);
    int my_strcmp(char *const s1, char *const s2);
    int my_strncmp(char *const s1, char *const s2, int n);
    int my_str_isalpha(char const *str);
    int my_str_isnum(char const *str);
    int my_str_islower(char const *str);
    int my_str_isupper(char const *str);
    int my_str_isprintable(char const *str);
    int my_printf(char *str, ...);
    int my_put_nbrbase(int nb, char const *str);
    int my_print_octal(char const *str);
    char *my_strupcase(char *str);
    char *my_strlowcase(char *str);
    char *my_strcapitalize(char *str);
    char *my_strcat(char *dest, char const *src);
    char *my_strncat(char *dest, char const *src, int nb);
    char *my_strcpy(char *dest, char const *src);
    char *my_strncpy(char *dest, char const *src, int n);
    char *my_revstr(char *str, char const *to_find);
    char *my_strdup(char *str);
    char **my_str_to_word_array(char **map, char *str);

#endif
