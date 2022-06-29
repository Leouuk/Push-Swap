/*
** EPITECH PROJECT, 2022
** pushswap project header
** File description:
** create & initialise the list
*/

#include <pushswap.h>
#include <stddef.h>
#include <stdlib.h>

node_t *create_list(int data)
{
    node_t *list = malloc(sizeof(node_t));

    if (list == NULL)
        return NULL;
    list->data = data;
    list->prev = NULL;
    list->next = NULL;
    return list;
}
