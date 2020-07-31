/*
** EPITECH PROJECT, 2019
** my_is_prime
** File description:
** my_is_prime
*/

int my_is_prime(int nb)
{
    int mod = 1;
    int mod_test;

    if (nb <= 1)
        return (0);
    while (mod < nb - 1) {
        mod += 1;
        mod_test = nb % mod;
        if (mod_test == 0) {
            return (0);
        }
    }
    return (1);
}
