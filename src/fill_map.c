/*
** EPITECH PROJECT, 2020
** navy
** File description:
** fill map
*/

#include "navy.h"

void fill_first_line(map_t *m)
{
    for (int i = 0; i != 15; i++) {
        if (i == 2)
            i++;
        m->map[0][i] = ' ';
    }
    m->map[0][1] = '|';
    m->map[0][2] = 'A';
    m->map[0][4] = 'B';
    m->map[0][6] = 'C';
    m->map[0][8] = 'D';
    m->map[0][10] = 'E';
    m->map[0][12] = 'F';
    m->map[0][14] = 'G';
    m->map[0][16] = 'H';
    m->map[0][17] = '\0';
}

void fill_nbr(map_t *m)
{
    m->map[0][2] = '1';
    m->map[1][2] = '2';
    m->map[2][2] = '3';
    m->map[3][2] = '4';
    m->map[4][2] = '5';
    m->map[5][2] = '6';
    m->map[6][2] = '7';
    m->map[7][2] = '8';
}

void fill_map(map_t *m)
{
    m->map = malloc(sizeof(char *) * 10);
    for (int i = 0; i != 10; i++)
        m->map[i] = malloc(sizeof(char) + 17);
    fill_first_line(m);
    fill_nbr(m);
    for (int i = 2; i != 10; i++)
        m->map[i][3] = '|';
    for (int i = 0; i != 17; i++) {
        m->map[1][i] = '-';
        if (i == 1)
            m->map[1][i] = '+';
    }
    for (int i = 2; i != 10; i++)
        for (int j = 2; j != 17; j++)
            m->map[i][j] = '.';
}
