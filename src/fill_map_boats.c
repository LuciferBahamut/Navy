/*
** EPITECH PROJECT, 2020
** navy
** File description:
** fill the map with boats
*/

#include "navy.h"

void fill_map_w_boats(map_t *m, char **pos)
{
    for (int i = 2; i != 17; i++) {
        if (m->map[0][i] == pos[0][2])
            m->map[my_atoi(pos[0][3] + 2)][i] = '2';
        if (m->map[0][i] == pos[0][5])
            m->map[my_atoi(pos[0][6] + 2)][i] = '2';
    }
}
