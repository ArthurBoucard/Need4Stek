/*
** EPITECH PROJECT, 2019
** base10 -> 8
** File description:
** base8
*/

int base8(int nb)
{
    int res = 0;
    int times = 1;

    while (nb != 0) {
        res += (nb % 8) * times;
        times *= 10;
        nb /= 8;
    }
    return (res);
}
