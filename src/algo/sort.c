/*
** EPITECH PROJECT, 2022
** pushswap project header
** File description:
** sort function
*/

#include "pushswap.h"
#include <stddef.h>

void my_sort(node_t *l_a, node_t *l_b, int len) 
{
    int counter = 0;
    int sorted_elem = 0;
    int nb_action = 0;

    while (sorted_elem < len) {
        for (int i = 0; (i < (len - sorted_elem - 1)); i += 1) {
            if (l_a->data <= l_a->next->data || l_a->next == NULL) {
                nb_action = pop_and_push(&l_a, &l_b, "pb", nb_action);
                counter += 1;
            } else {
                counter = 0;
                l_a = swap_two_first_elem(&l_a, nb_action);
                nb_action += 1;
                nb_action = pop_and_push(&l_a, &l_b, "pb", nb_action);
            }
        }
        while (l_b != NULL) {
            nb_action = pop_and_push(&l_b, &l_a, "pa", nb_action);
        }
        sorted_elem += counter;
    }
}
