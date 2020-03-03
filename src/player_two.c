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
    char **pos = open_file(av[2]);

    p->pid_2 = getpid();
    p->pid = my_atoi(av[1]);
    my_putstr("my_pid:  ");
    my_put_nbr(p->pid_2);
    if (kill(p->pid, SIGUSR1) == -1)
        return (FAIL);
    my_putstr("\nsuccessfully connected\n\n");
    m->map = fill_empty_map(m->map);
    m->map = fill_map_w_boats(m->map, pos);
    m->map_e = fill_empty_map(m->map_e);
    display_all(m->map, m->map_e);
    for (int i = 0; i != 14; i++)
        game2(m);
    return (SUCCESS);
}
