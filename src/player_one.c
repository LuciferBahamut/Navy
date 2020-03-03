/*
** EPITECH PROJECT, 2020
** navy
** File description:
** player_one
*/

#include "navy.h"

player_t *p;

int player_one(map_t *m)
{
    p->pid = getpid();
    my_putstr("my_pid:  ");
    my_put_nbr(p->pid);
    my_putstr("\nwaiting for enemy connection...\n");
    receive();
    my_putstr("\nenemy connected\n\n");
    m->map_e = fill_empty_map(m->map_e);
    display_all(m->map, m->map_e);
    for (int i = 1; i != 14; i++)
        game1(m);
    return (SUCCESS);
}
