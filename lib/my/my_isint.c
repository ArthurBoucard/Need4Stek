/*
** EPITECH PROJECT, 2019
** lib
** File description:
** my _isint
*/

int my_isint(char *str)
{
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] < '0' || str[i] > '9')
            return (84);
    }
    if (i == 0)
        return (84);
    return (0);
}
