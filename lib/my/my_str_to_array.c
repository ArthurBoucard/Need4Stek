/*
** EPITECH PROJECT, 2019
** lib c
** File description:
** word array
*/

#include "my.h"
#include "stdlib.h"

char **my_str_to_array(char *str, char c)
{
    int i = 1;
    int p = 0;
    char **dest;

    for (int j = 0; str[j] != '\0'; j++)
        i = str[j] == c ? i + 1 : i;
    dest = malloc(sizeof(char *) * (i + 1));
    for (int j = 0, k = 0; j < i; j++, k++, p = 0) {
        for (; str[k] != c && str[k] != '\0'; k++, p++);
            dest[j] = malloc(sizeof(char) * (p + 1));
	}
    for (int m = 0, k = 0, j = 0; k < i; k++, j++, m = 0) {
        for (; str[j] != c && str[j] != '\0'; m++, j++)
		    dest[k][m] = str[j];
        dest[k][m] = '\0';
	}
    return dest;
}