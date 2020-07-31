/*
** EPITECH PROJECT, 2020
** n4s
** File description:
** main
*/

#include "my.h"

char *test_str(char *str)
{
    int	a = 0;
    int	b = 0;
    char *tmp = malloc(sizeof(char *) * 100);

    while (a != 3)
        if (str[b++] == ':')
            a++;
    a = 0;
    for (;str[b] != 0; b++) {
        if ((str[b] >= '0' && str[b] <= '9') || str[b] == '.' || str[b] == ':') {
            tmp[a] = str[b];
            a++;
        }
    }
    tmp[a - 1] = '\0';
    return tmp;
}

int main()
{
    lidar_t lidar;
    char *str;

    exec("start_simulation\n");
    while (1) {
        exec("car_forward:0.7\n");
        my_putstr("get_info_lidar\n");
        str = get_next_line(0);
        test_end(str);
        str = test_str(str);
        lidar.tab = my_str_to_array(str, ':');
        if (test_dir(&lidar) == 1)
            break ;
    }
    return 0;
}