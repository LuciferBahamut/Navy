/*
** EPITECH PROJECT, 2020
** navy
** File description:
** checks if one of the players has won
*/

#include "navy.h"

int win_check(char **map)
{
    int hit = 0;

    for (int i = 0; i != 10; i++)
        for (int j = 0; j != 17; j++)
            if (map[i][j] == 'x')
                hit++;
    if (hit != 14)
        return (FALSE);
    return (TRUE);
}
