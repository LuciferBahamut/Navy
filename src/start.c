/*
** EPITECH PROJECT, 2020
** navy
** File description:
** test unitaires
*/

#include "navy.h"

player_t *p;
map_t *m;

void fill_struct(void)
{
    p->pid_2 = 0;
    p->check = 0;
    p->temp = 0;
}

int start(int ac, char **av)
{
    p = malloc(sizeof(player_t));
    m = malloc(sizeof(map_t));
    if (ac == 2 && my_strcmp(av[1], "-h"))
        return (display_h());
    if (error_handling(ac, av) == ERROR)
        return (ERROR);
    fill_struct();
    if (ac == 2)
        player_one(m);
    if (ac == 3)
        if (player_two(av, m) == FAIL)
            return (SUCCESS);
    free(p);
    return (SUCCESS);
}
