/*
** EPITECH PROJECT, 2022
** pushswap project header
** File description:
** add a node after head
*/

#include <pushswap.h>
#include <stddef.h>
#include <stdlib.h>

node_t *add_node_last(node_t *list, int data)
{
    node_t *temp = list;
    node_t *node = malloc(sizeof(node_t));

    if (node == NULL)
        return NULL;
    while (temp->next != NULL)
        temp = temp->next;
    node->data = data;
    node->next = NULL;
    node->prev = temp;
    temp->next = node;
    return list;
}
