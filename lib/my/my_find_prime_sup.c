/*
** EPITECH PROJECT, 2021
** my_find_prime_sup
** File description:
** my_find_prime_sup
*/

int my_is_prime(int nb)
{
    int i = 2;

    if (nb <= 0)
        return (84);
    while (i < nb) {
        if (nb % i > 0)
            i += 1;
        else
            return (0);
    }
    return (1);
}

int my_find_prime_sup(int nb)
{
    int counter = nb;

    if (nb <= 2)
        return (2);
    while (my_is_prime(counter) != 1) {
        counter += 1;
    }
    return (counter);
}
