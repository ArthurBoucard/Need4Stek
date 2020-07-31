/*
** EPITECH PROJECT, 2019
** my_str_to_word_array
** File description:
** my_str_to_word_array
*/

#include <stdlib.h>
#include "lib.h"

int non_alpha_char_test(char const *str, int i)
{
    if (str[i] >= 48 && str[i] <= 57 || str[i] >= 65 && str[i] <= 90)
        return (1);
    else if (str[i] >= 97 && str[i] <= 122)
        return (1);
    return (0);
}

char **my_str_to_word_array(char const *str)
{
    int j = 0;
    char *new_str;
    int argc = my_strlen(str);
    int i = 0;

    new_str = malloc(sizeof(char) * (argc));
    while (i < argc) {
        new_str[i] = str[i];
        i += 1;
    }
    new_str[i] = '\0';
    while (new_str[j] != '\0') {
        if (non_alpha_char_test(new_str, j) == 0)
            new_str[j] = '\n';
        j += 1;
    }
}
