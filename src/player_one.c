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

    my_putstr("My_pid: ");
    my_put_nbr(pid);
    my_putstr("\nwaiting for enemy connexion...\n");
    return (SUCCESS);
}
