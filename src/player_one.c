/*
** EPITECH PROJECT, 2020
** navy
** File description:
** player_one
*/

#include "navy.h"

int player_one(void)
{
    int pid = getpid();

    my_putstr("my_pid: ");
    my_put_nbr(pid);
    my_putstr("\nwaiting for enemy connection...\n");
    return (SUCCESS);
}
