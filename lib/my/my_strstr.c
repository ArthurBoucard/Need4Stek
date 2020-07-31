/*
** EPITECH PROJECT, 2019
** my_strstr
** File description:
** my_strstr
*/

#include <stddef.h>

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;
    int j = 0;

    while (str[i] != '\0') {
        while (str[i] != to_find[0])
            i += 1;
        while (str[i] == to_find[j]) {
            i += 1;
            j += 1;
            if (to_find[j] == '\0') {
                return (&str[i - j]);
            }
        }
    }
    return (NULL);
}
