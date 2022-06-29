/*
** EPITECH PROJECT, 2022
** pushswap project header
** File description:
** display_list
*/

#include "pushswap.h"
#include <stddef.h>

void print_list(node_t *list)
{
    for (node_t *temp = list; temp != NULL; temp = temp->next)
        my_printf("%d ", temp->data);
    my_printf("\n");
}
