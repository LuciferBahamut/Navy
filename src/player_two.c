/*
** EPITECH PROJECT, 2020
** navy
** File description:
** player two
*/

#include "navy.h"

player_t *p;

int player_two(char **av, map_t *m)
{
    int pid = getpid();
    int sig1 = my_atoi(av[1]);
    char **pos = open_file(av[2]);

    my_putstr("my_pid:  ");
    my_put_nbr(pid);
    if (kill(sig1, SIGUSR1) == -1)
        return (FAIL);
    my_putstr("\nsuccessfully connected\n\n");
    get_sig_start();
    m->map2 = fill_empty_map(m->map2);
    m->map2 = fill_map_w_boats(m->map2, pos);
    m->map2_e = fill_empty_map(m->map2_e);
    display_all(m->map2, m->map2_e);
    return (SUCCESS);
}
