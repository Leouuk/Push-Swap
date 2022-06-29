/*
** EPITECH PROJECT, 2022
** pushswap project header
** File description:
** check if list is already croissant order
*/

#include <pushswap.h>
#include <stddef.h>
#include <stdlib.h>

int is_list_sorted(node_t *list)
{
    int nb1 = 0;
    int nb2 = 0;

    for (node_t *temp = list->next; temp != NULL; temp = temp->next) {
        nb1 = temp->prev->data;
        nb2 = temp->data;
        if (nb2 < nb1)
            return 0;
    }
    return 1;
}
