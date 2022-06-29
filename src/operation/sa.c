/*
** EPITECH PROJECT, 2022
** pushswap project lister
** File description:
** sa operation
*/

#include <pushswap.h>
#include <stddef.h>

node_t *swap_two_first_elem(node_t **list, int count)
{
    node_t *first_n = (*list);
    node_t *second_n = (*list)->next;
    node_t *third_n = (*list)->next->next;

    second_n->prev = NULL;
    second_n->next = first_n;
    (*list) = second_n;
    first_n->next = third_n;
    first_n->prev = second_n;
    if (third_n)
        third_n->prev = first_n;
    if (count == 0)
        my_printf("sa");
    else
        my_printf(" sa");
    return (*list);
}
