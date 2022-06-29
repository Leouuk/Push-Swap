/*
** EPITECH PROJECT, 2021
** pushswap project header file
** File description:
** main function calling the program and error handling
*/

#include "pushswap.h"
#include <stddef.h>

int main (int argc, char **argv)
{
    if ((check_error(argc, argv) == 1))
        return 84;
    return (pushswap(argc, argv));
}
