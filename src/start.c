/*
** EPITECH PROJECT, 2020
** navy
** File description:
** test unitaires
*/

#include "navy.h"

int start(int ac, char **av)
{
    if (av[1][0] == '-' && av[1][1] == 'h')
        display_h();
    return (SUCCESS);
}
