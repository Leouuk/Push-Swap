/*
** EPITECH PROJECT, 2022
** pushswap project header
** File description:
** manage arg error
*/

#include "pushswap.h"
#include <stddef.h>

int check_error(int argc, char **argv)
{
    if (argc < 2 || argv[1] == NULL)
        return 1;
    return 0;
}
