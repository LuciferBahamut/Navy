/*
** EPITECH PROJECT, 2020
** navy
** File description:
** player two
*/

#include "navy.h"

void player_two(char **av)
{
    int pid = getpid();
    int sig1 = my_atoi(av[1]);

    my_putstr("my_pid:  ");
    my_put_nbr(pid);
    my_putstr("\nsuccessfully connected\n\n");
    kill(sig1, SIGUSR1);
}
