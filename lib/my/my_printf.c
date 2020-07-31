/*
** EPITECH PROJECT, 2019
** lib
** File description:
** my_printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include "lib.h"

void my_percent_s(char *str)
{
    int base;
    char *res_base = malloc(sizeof(char) * 4);

    for (int i = 0; i < my_strlen(str); i++) {
        if (str[i] < 32 || str[i] > 126) {
            base = base8(str[i]);
            res_base[0] = '\\';
            for (int j = 1; j != 4; j++)
                res_base[j] = '0';
            for (int k = 3; base != 0; k--) {
                res_base[k] = (base % 10) + 48;
                base /= 10;
            }
            for (int l = 0; l < my_strlen(res_base); l++)
                my_putchar(res_base[l]);
        } else
            my_putchar(str[i]);
    }
}

void my_cases_1(char *flags, int i, va_list ap)
{
    int nb;

    if (flags[i] == 'd' || flags[i] == 'i' || flags[i] == 'u') {
        nb = va_arg(ap, int);
        if (flags[i - 1] == ' ' && nb > 0)
            my_putchar(' ');
        my_put_nbr(nb);
    }
    if (flags[i] == 'c')
        my_putchar((char) va_arg(ap, int));
    if (flags[i] == 's')
        my_putstr(va_arg(ap, char *));
    if (flags[i] == 'b')
        my_putstr(base2(va_arg(ap, int)));
    if (flags[i] == 'S')
        my_percent_s(va_arg(ap, char *));
    if (flags[i] == 'p') {
        my_putstr("0x");
        my_putstr(base16_min(va_arg(ap, int)));
    }
}

void my_cases_2(char *flags, int i, va_list ap)
{
    int nb;

    if (flags[i] == 'o') {
        nb = va_arg(ap, int);
        if (flags[i - 1] == '#' && nb != 0)
            my_putchar('0');
        my_put_nbr(base8(nb));
    }
    if (flags[i] == 'x') {
        nb = va_arg(ap, int);
        if (flags[i - 1] == '#' && nb != 0)
            my_putstr("0x");
        my_putstr(base16_min(nb));
    }
    if (flags[i] == 'X') {
        nb = va_arg(ap, int);
        if (flags[i - 1] == '#' && nb != 0)
            my_putstr("0X");
        my_putstr(base16(nb));
    }
}

void my_percentpercent(int i, char *flags)
{
    int j;

    j = i;
    while (flags[j] == ' ')
        j--;
    if (flags[j] == '%')
        my_putchar(flags[j]);
}

int my_printf(char *flags, ...)
{
    va_list ap;
    int j;

    va_start(ap, flags);
    for (int i = 0; i < my_strlen(flags); i++) {
        if (flags[i] == '%') {
            i++;
            while (flags[i] == ' ' || flags[i] == '#')
                i++;
            if (flags[i] == '%')
                my_percentpercent(i, flags);
            my_cases_1(flags, i, ap);
            my_cases_2(flags, i, ap);
        } else
            my_putchar(flags[i]);
    }
    va_end(ap);
    return (0);
}
