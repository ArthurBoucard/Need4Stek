/*
** EPITECH PROJECT, 2019
** my_compute_power_rec
** File description:
** my_compute_power_rec
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0) {
        return (1);
    } else if (p < 0) {
        return (0);
    } else {
        return (nb * my_compute_power_rec(nb, p - 1));
    }
}
