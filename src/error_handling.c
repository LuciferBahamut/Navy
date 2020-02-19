/*
** EPITECH PROJECT, 2020
** navy
** File description:
** error_handling
*/

#include "navy.h"

int error_handling(int ac, char **av)
{
    if (ac < 2 || ac > 3) {
        write(2, STR_ERROR_ARG, my_strlen(STR_ERROR_ARG));
        return (ERROR);
    }
    return (SUCCESS);
}
