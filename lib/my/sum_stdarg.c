/*
** EPITECH PROJECT, 2019
** sum_stdarg
** File description:
** sum_stdarg
*/

#include <stdio.h>
#include <stdarg.h>
#include "lib.h"

int sum_stdarg(int i, int nb, ...)
{
    va_list ap;
    int res = 0;

    if (i != 0 && i != 1)
        return (84);
    va_start(ap, nb);
    if (i == 0) {
        for (; nb > 0; nb--)
            res += va_arg(ap, int);
    }else {
        for (; nb > 0; nb--)
            res += my_strlen(va_arg(ap, char *));
    }
    va_end(ap);
    my_put_nbr(res);
    my_putchar('\n');
    return (0);
}
