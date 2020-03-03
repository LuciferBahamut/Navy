/*
** EPITECH PROJECT, 2020
** navy
** File description:
** game1
*/

#include "navy.h"

player_t *p;

void multi_kill(int nb1, int nb2)
{
    for (int i = 0; i != nb1; i++) {
        kill(p->pid_2, SIGUSR1);
        usleep(100);
    }
    kill(p->pid_2, SIGUSR2);
    for (int i = 0; i != nb2; i++) {
        kill(p->pid_2, SIGUSR1);
        usleep(100);
    }
}

void hit_or_miss(map_t *m, char *str)
{
    if (check == -1)
        if (m->map[y][x] != '.' || m->map[y][x] != 'x' || m->map[y][x] != 'o') {
            m->map_e[y][x] = 'x';
            my_putchar(str[0]);
            my_putchar(str[1]);
            my_putstr(": hit\n");
        }
    if (check == -2)
        if (m->map[y][x] != '.' || m->map[y][x] != 'x' || m->map[y][x] != 'o') {
            m->map_e[y][x] = 'o';
            my_putchar(str[0]);
            my_putchar(str[1]);
            my_putstr(": missed\n");
        }
}

void game1(map_t *m)
{
    p->str = gnl();
    p->turn = 0;
    p->x = catoi1(av[0]);
    p->y = catoi(av[1]) + 1;
    multi_kill(x, y);
    rec_hit_miss();
    hit_or_miss(m, str);
    my_putstr("waiting for enemy's attack...\n");
    rec_send();
    ans_send();
    display_all(m->map, m->map_e);
}
