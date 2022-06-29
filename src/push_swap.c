/*
** EPITECH PROJECT, 2021
** pushswap project header
** File description:
** call all functions in project
*/

#include "pushswap.h"
#include <stddef.h>

int pushswap(int argc, char **argv)
{
    int len = (argc - 1);
    node_t *l_b = NULL;
    node_t *l_a = init_list(argc, argv);

    if ((is_list_sorted(l_a) == 1)) {
        my_putchar('\n');
        return 0;
    }
    my_sort(l_a, l_b, len);
    my_putchar('\n');
    free_list(l_a);
    free_list(l_b);
    return 0;
}
