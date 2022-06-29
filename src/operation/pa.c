/*
** EPITECH PROJECT, 2022
** pushswap project header
** File description:
** pop and push, pb and pa operations
*/

#include "pushswap.h"
#include <stdlib.h>

node_t *pop_first_elem(node_t **list)
{
    node_t *temp = (*list);

    (*list) = (*list)->next;
    temp->next = NULL;
    temp->prev = NULL;
    if (*list == NULL)
        return temp;
    (*list)->prev = NULL;
    return (temp);
}

node_t *push_first_elem(node_t **list, node_t *temp)
{
    if (*list == NULL) {
        (*list) = temp;
        return (*list);
    }
    temp->next = (*list);
    (*list)->prev = temp;
    temp->prev = NULL;
    (*list) = temp;
    return (*list);
}

int pop_and_push(node_t **l_a, node_t **l_b, char *str, int count)
{
    node_t *temp = pop_first_elem(l_a);

    *l_b = push_first_elem(l_b, temp);
    if (count == 0)
        my_printf("%s", str);
    else
        my_printf(" %s", str);
    return (count + 1);
}
