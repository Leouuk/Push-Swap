/*
** EPITECH PROJECT, 2021
** my_strcmp
** File description:
** Count total of string, then compare two strings
*/

#include <stddef.h>

int my_strcmp(char *const s1, char *const s2)
{
    int i = 0;

    if (s1 == NULL || s2 == NULL)
        return (84);
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        i += 1;
    }
    return (s1[i] - s2[i]);
}
