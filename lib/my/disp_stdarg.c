/*
** EPITECH PROJECT, 2019
** disp_stdarg
** File description:
** disp_stdarg
*/

#include <stdio.h>
#include <stdarg.h>
#include "lib.h"

int disp_stdarg (char *s , ... )
{
    va_list ap;

    va_start(ap, s);
    for (int i = 0; i < my_strlen(s); i++) {
        if (s[i] == 's')
            my_putstr(va_arg(ap, char *));
        else if (s[i] == 'c')
            my_putchar(va_arg(ap, int));
        else
            my_put_nbr(va_arg(ap, int));
        my_putchar('\n');
    }
    va_end(ap);
    return (0);
}
