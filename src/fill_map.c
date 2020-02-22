/*
** EPITECH PROJECT, 2020
** navy
** File description:
** fill map
*/

#include "navy.h"

void fill_first_line(map_t *m)
{
    char letter = 'A';

    for (int i = 0; i != 17; i++) {
        if (i == 2)
            i++;
        m->map[0][i] = ' ';
    }
    m->map[0][1] = '|';
    for (int i = 2; i != 17; i++) {
        if (i % 2 == 0) {
            m->map[0][i] = letter;
            letter++;
        }
    }
    m->map[0][17] = '\0';
}

void fill_nbr(map_t *m)
{
    char number = '1';

    for (int i = 2; i != 10; i++, number++)
        m->map[i][0] = number;
}

void fill_empty_map(map_t *m)
{
    m->map = malloc(sizeof(char *) * 10);
    for (int i = 0; i != 10; i++)
        m->map[i] = malloc(sizeof(char) + 17);
    fill_first_line(m);
    fill_nbr(m);
    for (int i = 2; i != 10; i++)
        m->map[i][1] = '|';
    for (int i = 0; i != 17; i++) {
        m->map[1][i] = '-';
        if (i == 1)
            m->map[1][i] = '+';
    }
    for (int i = 2; i != 10; i++)
        for (int j = 2; j != 17; j++) {
            if (j % 2 == 0)
                m->map[i][j] = '.';
            else
                m->map[i][j] = ' ';
        }
}
