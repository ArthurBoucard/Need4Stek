/*
** EPITECH PROJECT, 2019
** my_show_word_array
** File description:
** my_show_word_array
*/

#include <unistd.h>

int my_show_word_array(char * const *tab)
{
    int i = 0;
    int j = 0;
    int arr = 0;

    while (tab[arr] != NULL)
        arr += 1;
    while (j < arr) {
        while (tab[j][i] != '\0') {
            write(1, &tab[j][i], 1);
            i += 1;
        }
        j += 1;
        i = 0;
        write(1, "\n", 1);
    }
    return (0);
}
