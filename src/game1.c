/*
** EPITECH PROJECT, 2020
** navy
** File description:
** game1
*/

#include "navy.h"

player_t *p;

static void reset_value(void)
{
    p->attack = 0;
    p->x = 0;
    p->y = 0;
}

void game1(map_t *m)
{
    reset_value();
    p->str = gnl();
    multi_kill(catoi1(p->str[0]), catoi(p->str[1]) + 1);
    receive_answer();
    usleep(1000);
    map_update_e(m, catoi1(p->str[0]), catoi(p->str[1]) + 1);
    usleep(1000);
    my_putstr("waiting for enemy's attack...\n");
    multi_receive();
    p-> count = 0;
    p->attack = check_co_map(m->map);
    usleep(1000);
    send_answer(p->attack);
    map_update(m);
    display_all(m->map, m->map_e);
}
