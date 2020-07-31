/*
** EPITECH PROJECT, 2019
** my_strncat
** File description:
** my_strncat
*/

char *my_strncat(char *dest, char const *src, int nb)
{
    int i = 0;
    int j = 0;

    while (dest[i] != '\0')
        i += 1;
    while (src[j] != '\0' && nb > 0) {
        dest[i] = src[j];
        j += 1;
        i += 1;
        nb -= 1;
    }
    dest[i + 1] = '\0';
    return (dest);
}
