/*
** EPITECH PROJECT, 2020
** navy
** File description:
** error_handling
*/

#include "navy.h"

static void multi_free(char **pos, char *buffer)
{
    free(pos);
    free(buffer);
}

int error_handling_player1(char *path)
{
    char *buffer = malloc(sizeof(char) * READ_SIZE + 1);
    int fd = open(path, O_RDONLY);
    int rd = read(fd, buffer, READ_SIZE);
    char **pos;

    if (fd == -1 || rd < 0) {
        write_error(STR_ERROR_OPEN);
        return (ERROR);
    }
    if (count_boats(buffer) == ERROR) {
        free(buffer);
        return (ERROR);
    }
    buffer = clean_buffer(buffer);
    pos = split_pos(buffer);
    if (check_pos(pos) == ERROR) {
        multi_free(pos, buffer);
        return (ERROR);
    }
    multi_free(pos, buffer);
    return (SUCCESS);
}

int error_handling_player2(char **av)
{
    return (SUCCESS);
}

int error_handling(int ac, char **av)
{
    if (ac < 2 || ac > 3) {
        write_error(STR_ERROR_ARG);
        return (ERROR);
    }
    if (ac == 2)
        if (error_handling_player1(av[1]) == ERROR)
            return (ERROR);
    if (ac == 3)
        if (error_handling_player2(av) == ERROR)
            return (ERROR);
    return (SUCCESS);
}
