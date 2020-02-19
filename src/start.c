/*
** EPITECH PROJECT, 2020
** navy
** File description:
** test unitaires
*/

#include "navy.h"

int start(int ac, char **av)
{
    if (error_handling(ac, av) == ERROR)
        return (ERROR);
    return (SUCCESS);
}
