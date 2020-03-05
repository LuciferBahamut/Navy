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
    int i = 0;

    p->turn = 1;
    p->pid = getpid();
    my_putstr("my_pid:  ");
    my_put_nbr(p->pid);
    my_putstr("\nwaiting for enemy connection...\n");
    connect();
    my_putstr("\nenemy connected\n\n");
    m->map_e = fill_empty_map(m->map_e);
    display_all(m->map, m->map_e);
    for (i = win_check(m->map_e); i != TRUE; i = win_check(m->map_e))
        game1(m);
    if (i == TRUE) {
        my_putstr("I won\n");
        return (0);
    }
    else {
        my_putstr("Enemy won\n");
        return (1);
    }
}
