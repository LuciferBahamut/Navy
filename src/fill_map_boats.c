/*
** EPITECH PROJECT, 2020
** navy
** File description:
** fill the map with boats
*/

#include "navy.h"

int catoi(char c)
{
    int nb = 0;

    switch (c) {
    case '1' : nb = 1;
        break;
    case '2' : nb = 2;
        break;
    case '3' : nb = 3;
        break;
    case '4' : nb = 4;
        break;
    case '5' : nb = 5;
        break;
    case '6' : nb = 6;
        break;
    case '7' : nb = 7;
        break;
    case '8' : nb = 8;
        break;
    }
    return (nb);
}

void fill_col(map_t *m, char **pos, int line, char nb)
{
    int nb1 = catoi(pos[line][3]) + 1;
    int nb2 = catoi(pos[line][6]) + 1;

    for (int i = 2; i != 17; i++)
        if (m->map[0][i] == pos[line][2]) {
            m->map[nb1][i] = nb;
            for (int j = nb1; j != nb2; j++)
                m->map[j][i] = nb;
            m->map[nb2][i] = nb;
        }
}

void fill_line(map_t *m, char **pos, int line, char nb)
{
}

void fill_map_w_boats(map_t *m, char **pos)
{
    for (int i = 2; i != 17; i++) {
        if (m->map[0][i] == pos[0][2])
            m->map[catoi(pos[0][3]) + 1][i] = '2';
        if (m->map[0][i] == pos[0][5])
            m->map[catoi(pos[0][6]) + 1][i] = '2';
    }
    for (int i = 1; i != 4; i++) {
        if (pos[i][2] == pos[i][5])
            fill_col(m, pos, i, pos[i][0]);
        else
            fill_line(m, pos, i, pos[i][0]);
    }
}
