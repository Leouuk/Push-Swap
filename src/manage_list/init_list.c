/*
** EPITECH PROJECT, 2021
** pushswap project header
** File description:
** call all functions in project
*/

#include "pushswap.h"
#include <stddef.h>

node_t *init_list(int argc, char **argv)
{
    int data = my_getnbr(argv[1]);
    node_t *list = create_list(data);

    for (int i = 2; i < argc; i += 1) {
        data = my_getnbr(argv[i]);
        list = add_node_last(list, data);
    }
    return list;
}
