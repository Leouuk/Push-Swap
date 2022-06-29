/*
** EPITECH PROJECT, 2021
** my_is_prime
** File description:
** returns 1 if prime, 0 if not.
*/

#include "my.h"

int my_is_prime(int nb)
{
    int result = 2;

    if (nb <= 0)
        return (84);
    while (result < nb) {
        if (nb % result > 0)
            result += 1;
        else
            return (0);
    }
    return (1);
}
