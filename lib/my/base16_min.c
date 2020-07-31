/*
** EPITECH PROJECT, 2019
** base 10 -> 16min
** File description:
** base1-_min
*/

#include <stdlib.h>
#include "lib.h"

char *convert_letter_min(int i, int nb, char *res)
{
    if ((nb % 16) == 10)
        res[i] = 'a';
    if ((nb % 16) == 11)
        res[i] = 'b';
    if ((nb % 16) == 12)
        res[i] = 'c';
    if ((nb % 16) == 13)
        res[i] = 'd';
    if ((nb % 16) == 14)
        res[i] = 'e';
    if ((nb % 16) == 15)
        res[i] = 'f';
    return (res);
}

char *base16_min(int nb)
{
    char *res = malloc(sizeof(char) * nb);
    int i = 0;

    res[i] = '0';
    while (nb != 0) {
        if ((nb % 16) < 10)
            res[i] = (nb % 16) + 48;
        else
            res = convert_letter_min(i, nb, res);
        nb /= 16;
        i++;
    }
    my_revstr(res);
    return (res);
}
