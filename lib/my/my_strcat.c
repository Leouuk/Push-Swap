/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** Concatenate two strings
*/

#include "my.h"
#include <stddef.h>

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int len = my_strlen(dest);

    if (dest == NULL || src == NULL)
        return (NULL);
    while (src[i] != '\0') {
        dest[len + i] = src[i];
        i += 1;
    }
    dest[len + i] = '\0';
    return (dest);
}
