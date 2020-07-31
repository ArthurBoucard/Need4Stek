/*
** EPITECH PROJECT, 2019
** base 16 -> 10
** File description:
** base16to10
*/

#include <stdlib.h>
#include "lib.h"

char *letter_to_int(int i, int j, char *res, char *str)
{
    int nb;

    res[j] = '1';
    if (str[i] = 'a')
        res[j + 1] = '0';
    if (str[i] = 'b')
        res[j + 1] = '1';
    if (str[i] = 'c')
        res[j + 1] = '2';
    if (str[i] = 'd')
        res[j + 1] = '3';
    if (str[i] = 'e')
        res[j + 1] = '4';
    if (str[i] = 'f')
        res[j + 1] = '5';
    return (res);
}

int base16to10(char *str)
{
    char *res = malloc(sizeof(char) * my_strlen(str) * 2);
    int i = 0;
    int j = 0;

    while (i != my_strlen(str)) {
        if (str[i] >= 48 && str[i] <= 57) {
            res[j] = str[i];
        } else {
            res = letter_to_int(i, j, res, str);
            j += 2;
        }
        j++;
        i++;
    }
    return (my_getnbr(res));
}
