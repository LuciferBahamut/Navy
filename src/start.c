/*
** EPITECH PROJECT, 2020
** navy
** File description:
** test unitaires
*/

#include "navy.h"

int start(int ac, char **av)
{
    if (ac == 2 && my_strcmp(av[1], "-h"))
        return (display_h());
    if (error_handling(ac, av) == ERROR)
        return (ERROR);
    player_one();
    return (SUCCESS);
}
