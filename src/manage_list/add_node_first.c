/*
** EPITECH PROJECT, 2022
** pushswap project header
** File description:
** add a node before head
*/

#include <pushswap.h>
#include <stddef.h>
#include <stdlib.h>

node_t *add_node_first(node_t *list, int data)
{
    node_t *temp = malloc(sizeof(node_t));

    if (temp == NULL)
        return NULL;
    temp->data = data;
    temp->next = list;
    temp->prev = NULL;
    list->prev = temp;
    list = temp;
    return list;
}
