/*
** EPITECH PROJECT, 2019
** my_find_prime_sup
** File description:
** my_find_prime_sup
*/

int my_nb_prime(int nb_test)
{
    int mod = 1;
    int mod_test;

    if (nb_test <= 1)
        return (0);
    while (mod < nb_test - 1) {
        mod += 1;
        mod_test = nb_test % mod;
        if (mod_test == 0)
            return (0);
    }
    return (1);
}

int my_find_prime_sup(int nb)
{
    while (my_nb_prime(nb) == 0) {
        nb += 1;
    }
    return (nb);
}
