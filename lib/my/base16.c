/*
** EPITECH PROJECT, 2019
** base 10 -> 16
** File description:
** base16
*/

#include <stdlib.h>
#include "lib.h"

char *convert_letter(int i, int nb, char *res)
{
    if ((nb % 16) == 10)
        res[i] = 'A';
    if ((nb % 16) == 11)
        res[i] = 'B';
    if ((nb % 16) == 12)
        res[i] = 'C';
    if ((nb % 16) == 13)
        res[i] = 'D';
    if ((nb % 16) == 14)
        res[i] = 'E';
    if ((nb % 16) == 15)
        res[i] = 'F';
    return (res);
}

char *base16(int nb)
{
    char *res = malloc(sizeof(char) * nb);
    int i = 0;

    res[i] = '0';
    while (nb != 0) {
        if ((nb % 16) < 10)
            res[i] = (nb % 16) + 48;
        else
            res = convert_letter(i, nb, res);
        nb /= 16;
        i++;
    }
    my_revstr(res);
    return (res);
}
