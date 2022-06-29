/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** Display a string
*/

#include "my.h"
#include <stddef.h>

int my_putstr(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (84);
    while (str[i] != '\0') {
        my_putchar(str[i]);
        i += 1;
    }
    return (0);
}
