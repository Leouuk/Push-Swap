/*
** EPITECH PROJECT, 2021
** my_strdup
** File description:
** allocates memory, copies the str given in arg
*/

#include "my.h"
#include <stddef.h>
#include <stdlib.h>

char *my_strdup(char *str)
{
    int len;
    char *dup;

    len = my_strlen(str) + 1;
    dup = malloc(sizeof(char *) * (len));
    if (dup == NULL) {
        return (NULL);
    }
    dup = my_strcpy(dup, str);
    dup[len - 1] = '\0';
    return (dup);
}
