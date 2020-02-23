/*
** EPITECH PROJECT, 2020
** navy
** File description:
** player_one
*/

#include "navy.h"

player_t *p;

void handl_sig(int sig, siginfo_t *inf, void *context)
{
    (void)context;
    p->ppid = inf->si_pid;
    if (sig == SIGUSR1 && p->check == 0)
        p->check = 1;
}

void get_sig_start(void)
{
    struct sigaction sa;
    sigset_t mask;
    
    sigemptyset(&mask);
    sa.sa_mask = mask;
    sa.sa_sigaction = handl_sig;
    sa.sa_flags = SA_SIGINFO;
    if (sigaction(SIGUSR1, &sa, NULL) == -1)
        my_putstr("Error: cannot handle SIGUSR1\n");
    if (sigaction(SIGUSR2, &sa, NULL) == -1)
        my_putstr("Error: cannot handle SIGUSR2\n");
    while (p->check == 0)
        usleep(100);
}

int player_one(void)
{
    p->pid = getpid();
    my_putstr("my_pid:  ");
    my_put_nbr(p->pid);
    my_putstr("\nwaiting for enemy connection...\n");
    get_sig_start();
    my_putstr("\nenemy connected\n\n");
    return (SUCCESS);
}
