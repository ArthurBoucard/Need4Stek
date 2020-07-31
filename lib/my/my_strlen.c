/*
** EPITECH PROJECT, 2019
** my_strlen
** File description:
** my_strlen
*/

#include <unistd.h>

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i += 1;
    }
    return (i);
}
