/*
** EPITECH PROJECT, 2020
** n4s
** File description:
** exec commande
*/

#include "my.h"

int	exec(char *cmd)
{
    my_printf(cmd);
    cmd = get_next_line(0);
    return test_end(cmd);
}

char *get_next_line(int fd)
{
    static line_t var;

    if ((var.idx == 0 && (var.value_read = read(fd, var.buf, 1)) < 1)
        || (var.idx_line == 0 && (var.line = malloc(4000)) == NULL))
        exit(write(2, "exit\n", 5));
    while (var.idx != var.value_read) {
        if (var.buf[var.idx] == '\n' || var.buf[var.idx] == 0) {
            var.idx += 1;
            var.line[var.idx_line] = 0;
            var.idx_line = 0;
            return (var.line);
        }
        var.line[var.idx_line] = var.buf[var.idx];
        var.idx_line += 1;
        var.idx += 1;
    }
    var.idx = 0;
    get_next_line(fd);
    return var.line;
}