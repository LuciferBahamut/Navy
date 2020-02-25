/*
** EPITECH PROJECT, 2020
** navy
** File description:
** display the maps
*/

#include "navy.h"

void display_map(char **map)
{
    for (int i = 0; i != 10; i++) {
        my_putstr(map[i]);
        my_putchar('\n');
    }
}
