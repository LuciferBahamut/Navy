/*
** EPITECH PROJECT, 2020
** navy
** File description:
** check if the postion of the boats is valid
*/

#include "navy.h"

int check_pos(char **pos)
{
    for (int i = 2, j = 0; j != 4; j++, i++)
        if (my_atoi(pos[j]) != i) {
            write(2, STR_ERROR_SIZE_B, my_strlen(STR_ERROR_SIZE_B));
            return (ERROR);
        }
    return (SUCCESS);
}
