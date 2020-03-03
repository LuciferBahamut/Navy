/*
** EPITECH PROJECT, 2020
** navy
** File description:
** game2
*/

#include "navy.h"

player_t *p;

void game2(map_t *m)
{  
    my_putstr("waiting for enemy's attack...\n");
    rec_send();
    ans_send();
    p->str = gnl();
    p->turn = 0;
    p->x = catoi1(av[0]);
    p->y = catoi(av[1]) + 1;
    multi_kill(x, y);
    rec_hit_miss();
    hit_or_miss(m, str);
    display_all(m->map, m->map_e);
}
