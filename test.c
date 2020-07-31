/*
** EPITECH PROJECT, 2020
** n4s
** File description:
** test
*/

#include <stdlib.h>
#include "my.h"

int test_end(char *end)
{
    int	i = my_strlen(end) - 1;
    int	j = 0;
    char *new = malloc(sizeof(char *) * my_strlen(end));

    for (;end[i] != ':' && end[i] != 0; i--);
    i--;
    for (;end[i] != ':' && end[i] != 0; i--);
    i++;
    while (end[i] != ':' && end[i] != 0)
        new[j++] = end[i++];
    new[j] = 0;
    if (my_strcmp("Track Cleared", new) == 0) {
        free(new);
        exec("stop_simulation\n");
        return 1;
    }
    free(new);
    return 0;
}

int	right_or_left(float dir, char *str)
{
    my_printf("wheels_dir:");
    if (dir < 0.0)
        my_printf("-");
    my_printf(str);
    str = get_next_line(0);
    return test_end(str);
}

int	test_dir(lidar_t *lidar)
{
    float dir = atof(lidar->tab[1]) - atof(lidar->tab[31]);
    float mid = atof(lidar->tab[15]);

    if (mid >= 1500)
        return right_or_left(dir, "0.005\n");
    else if (mid >= 1000)
        return right_or_left(dir, "0.05\n");
    else if (mid >= 600)
        return right_or_left(dir, "0.1\n");
    else if (mid >= 400)
        return right_or_left(dir, "0.2\n");
    else if (mid >= 200)
        return right_or_left(dir, "0.3\n");
    else
        return right_or_left(dir, "0.5\n");
}