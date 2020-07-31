/*
** EPITECH PROJECT, 2019
** my_put_nbr.c
** File description:
** my_put_nbr
*/

#include "lib.h"

void calculus(int numb)
{
    if (numb > 0) {
        calculus(numb / 10);
        my_putchar(numb % 10 + 48);
    }
}

int my_put_nbr(int nb)
{
    if (nb == 0) {
        my_putchar('0');
        return (0);
    }
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
    }
    calculus(nb);
    return (0);
}
