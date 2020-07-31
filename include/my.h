/*
** EPITECH PROJECT, 2019
** my
** File description:
** my.h
*/

#include "../lib/my/lib.h"
#include <unistd.h>
#include <stdlib.h>

typedef struct line
{
    int idx;
    int	idx_line;
    int	k;
    int	value_read;
    char buf[1];
    char *line;
}line_t;

typedef struct lidar
{
    char **tab;
}lidar_t;

char *get_next_line(int fd);

int	exec(char *cmd);

int test_end(char *end);

int	right_or_left(float dir, char *str);

int	test_dir(lidar_t *lidar);