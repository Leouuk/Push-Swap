/*
** EPITECH PROJECT, 2021
** my_strlowcase
** File description:
** Puts first letter of string in lowercase
*/

#include <stddef.h>

char *my_strlowcase (char *str)
{
    int i = 0;

    if (str == NULL)
        return (NULL);
    while (str[i] != '\0') {
        if (str [i] > 64 && str[i] < 91)
            str[i] = str[i] + 32;
        i += 1;
    }
    return (str);
}
