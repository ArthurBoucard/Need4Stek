/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** task05 day04
*/

int nbr(char c)
{
    if (c >= '0' && c <= '9')
        return (1);
    else
        return (0);
}

int add_sub(char c)
{
    if (c == '-' || c == '+')
        return (1);
    else
        return (0);
}

int my_getnbr(char *str)
{
    int	nb = 0;
    int	i = 0;
    int	neg = 1;

    while (add_sub(str[i]) == 1)
        i = i + 1;
    if (str[i - 1] == '-')
        neg = -1;
    while (nbr(str[i]) == 1)
    {
        if (nb < 0)
            return (0);
        nb = ((nb * 10) + (str[i] - '0'));
        i = i + 1;
    }
    if (nb < 0)
        return (0);
    return (nb * neg);
}
