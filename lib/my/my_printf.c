/*
** EPITECH PROJECT, 2021
** my_printf
** File description:
** MY_PRINTF
*/

#include "my.h"
#include <stdarg.h>

int error(char flag, va_list (args))
{
    switch (flag) {
        default:
        return (84);
    }
}

int define_flag3(char flag, va_list(args))
{
    switch (flag) {
        case 'b':
        int value_b = va_arg(args, unsigned int);
        my_put_nbrbase(value_b, "01");
        break;
        case 'S':
        char *value_S = va_arg(args, char *);
        my_print_octal(value_S);
        break;
        default:
        error(flag, args);
        break;
    }
}

int define_flag2(char flag, va_list(args))
{
    switch (flag) {
        case 'c':
        char value_c = va_arg(args, int);
        my_putchar(value_c);
        break;
        case 's':
        char *value_s = va_arg(args, char *);
        my_putstr(value_s);
        break;
        case 'o':
        int value_o = va_arg(args, int);
        my_put_nbrbase(value_o, "01");
        break;
        default:
        define_flag3(flag, args);
        break;
    }
}

int define_flag1(char flag, va_list(args))
{
    switch (flag) {
        case 'd':
        int value_d = va_arg(args, int);
        my_put_nbr(value_d);
        break;
        case 'i':
        int value_i = va_arg(args, int);
        my_put_nbr(value_i);
        break;
        case 'u':
        unsigned int value_u = va_arg(args, unsigned int);
        my_put_nbr(value_u);
        break;
        default:
        define_flag2(flag, args);
        break;
    }
    return (0);
}

int my_printf(char *str, ...)
{
    int i = 0;
    va_list (args);
    va_start (args, str);

    while (str[i] != '\0') {
        if (str[i] == '%') {
            i += 1;
            define_flag1(str[i], args);
        } else {
            my_putchar(str[i]);
        }
        i += 1;
    }
    va_end (args);
    return (0);
}
