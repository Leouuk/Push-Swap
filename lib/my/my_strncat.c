/*
** EPITECH PROJECT, 2021
** my_strncat
** File description:
** my_strncat
*/

#include "my.h"
#include <stddef.h>

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int dest_len = my_strlen(dest);

    if (src == NULL || dest == NULL)
        return (NULL);
    while (i < nb) {
        dest[dest_len] = src[i];
        i += 1;
        dest_len += 1;
    }
    return (dest);
}
