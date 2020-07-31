/*
** EPITECH PROJECT, 2019
** my_strncpy
** File description:
** my_strncpy
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n) {
        if (src[i] == '\0') {
            dest[i] = src[i];
            break;
        }
        dest[i] = src[i];
        i += 1;
    }
    return (dest);
}
