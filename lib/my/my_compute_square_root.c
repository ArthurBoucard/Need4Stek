/*
** EPITECH PROJECT, 2019
** my_compute_square_root
** File description:
** my_compute_square_root
*/

int my_compute_square_root(int nb)
{
    int odd = 1;
    int count = 0;

    while (nb != 0) {
        if (nb < 0)
            return (0);
        nb = nb - odd;
        odd += 2;
        count += 1;
    }
    nb = count;
    return (nb);
}
