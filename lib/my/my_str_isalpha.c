/*
** EPITECH PROJECT, 2021
** my_str_isalpha
** File description:
** Check if a string only contain alphabetic characters
*/

#include <stddef.h>

int my_str_isalpha(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (84);
    while (str[i] != '\0') {
        if (str[i] <= 'Z' && str[i] >= 'A' || str[i] <= 'z' && str[i] >= 'a')
            i += 1;
        else
            return (0);
    }
    return (1);
}
