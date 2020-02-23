/*
** EPITECH PROJECT, 2020
** navy
** File description:
** player two
*/

#include "navy.h"

void player_two(char **av, map_t *m)
{
    int pid = getpid();
    int sig1 = my_atoi(av[1]);
    char **pos = open_file(av[2]);

    my_putstr("my_pid:  ");
    my_put_nbr(pid);
    my_putstr("\nsuccessfully connected\n\n");
    kill(sig1, SIGUSR1);
    my_putstr("my positions:\n");
    m->map2 = fill_empty_map(m->map2);
    m->map2 = fill_map_w_boats(m->map2_e, pos);
    for (int i = 0; i != 10; i++) {
        my_putstr(m->map2[i]);
        my_putchar('\n');
    }
    my_putstr("\nenemy's positions:\n");
    m->map2_e = fill_empty_map(m->map2_e);
    for (int i = 0; i != 10; i++) {
        my_putstr(m->map2_e[i]);
        my_putchar('\n');
    }
}
