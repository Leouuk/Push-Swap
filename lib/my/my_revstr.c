/*
** EPITECH PROJECT, 2021
** my_revstr
** File description:
** Reverse a string
*/

#include "my.h"
#include <stddef.h>

char *my_revstr(char *str, char const *to_find)
{
    int i = 0;
    int n = my_strlen(str) - 1;
    char c = 0;

    if (str == NULL || to_find == NULL)
        return (NULL);
    while (i < n) {
        c = str[i];
        str[i] = str[n];
        str[n] = c;
        i = i + 1;
        n = n - 1;
    }
    return (str);
}
