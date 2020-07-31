/*
** EPITECH PROJECT, 2019
** base2
** File description:
** base2
*/

#include <stdlib.h>

char *base2(int nb)
{
    char *res = malloc(sizeof(char) * nb);
    int i = 0;

    while (nb != 0) {
        res[i] = (nb % 2) + 48;
        nb /= 2;
        i++;
    }
    return (res);
}
