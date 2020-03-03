/*
** EPITECH PROJECT, 2020
** navy
** File description:
** gnl
*/

#include "navy.h"

char *gnl(void)
{
    long unsigned size = 3;
    char *buff = malloc(sizeof(char) * size + 1);

    my_putstr("attack: ");
    getline(&buff, &size, stdin);
    if (my_strlen(buff) != 3) {
        free(buff);
        my_putstr("wrong position\n");
        gnl();
    }
    if (buff[0] < 'A' || buff[0] > 'H') {
        free(buff);
        my_putstr("wrong position\n");
        gnl();
    }
    if (buff[1] < '1' || buff[1] > '8') {
        free(buff);
        my_putstr("wrong position\n");
        gnl();
    }
    return (buff);
}
