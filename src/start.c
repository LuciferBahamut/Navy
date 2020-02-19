/*
** EPITECH PROJECT, 2020
** navy
** File description:
** test unitaires
*/

#include "navy.h"

int start(int ac, char **av)
{
<<<<<<< HEAD
    if (error_handling(ac, av) == ERROR)
        return (ERROR);
=======
    if (av[1][0] == '-' && av[1][1] == 'h')
        display_h();
>>>>>>> fc5cf7327d51da7b9dcf77f1ad7fc782759f3d3f
    return (SUCCESS);
}
