/*
** EPITECH PROJECT, 2022
** pushswap project header
** File description:
** free_list
*/

#include "pushswap.h"
#include <stdlib.h>

void free_list(node_t *list)
{
    node_t *temp = NULL;

    while (list != NULL) {
        temp = list;
        list = list->next;
        free(temp);
    }
}
