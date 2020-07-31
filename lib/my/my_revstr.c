/*
** EPITECH PROJECT, 2019
** my_revstr
** File description:
** my_revstr
*/

#include <unistd.h>

char *my_revstr(char *str)
{
    char c[1];
    int n = 0;
    int i = 0;

    while (str[i] != '\0')
        i  = i + 1;
    while (i > n){
        c[0] = str[n];
        str[n] = str[i-1];
        str[i-1] = c[0];
        i = i - 1;
        n = n + 1;
    }
    return (str);
}
