/*
** EPITECH PROJECT, 2019
** my_strncmp
** File description:
** my_strncmp
*/

int my_strncmp(char const *s1, char const *s2, int n)
{
    int i = 0;
    int diff;

    while (s1[i] == s2[i] && n == 0) {
        i += 1;
        n -= 1;
    }
    diff = s1[i] - s2[i];
    return (diff);
}
