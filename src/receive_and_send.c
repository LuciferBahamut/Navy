/*
** EPITECH PROJECT, 2020
** navy
** File description:
** receive and send
*/

#include "navy.h"

player_t *p;

void handl_sig(int sig, siginfo_t *inf, void *context)
{
    (void)context;
    p->pid_2 = inf->si_pid;
    if (sig == SIGUSR1 && p->check == 0)
        p->check = 1;
    if (sig == SIGUSR2 && p->check == 0)
        p->check = 1;
}

void handl_res(int sig, siginfo_t *inf, void *context)
{
    (void)context;
    (void)inf;
    if (sig == SIGUSR1 && p->turn = 1) {
        p->turn = 1;
        p->x += 1;
    }
    if (sig == SIGUSR2)
        p->turn = 2;
    if (sig == SIGUSR1 && p->turn = 2)
        p->y += 1;
}

void handl_res_send(int sig, siginfo_t *inf, void *context)
{
    (void)context;
    (void)inf;
    if (sig == SIGUSR1)
        p->check = -1;
    if (sig == SIGUSR2)
        p->check = -2;
}

void receive(void)
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

void rec_send(void)
{
    struct sigaction sa;
    sigset_t mask;

    sigemptyset(&mask);
    sa.sa_mask = mask;
    sa.sa_sigaction = handl_res;
    sa.sa_flags = SA_SIGINFO;
    if (sigaction(SIGUSR1, &sa, NULL) == -1)
        my_putstr("Error: cannot handle SIGUSR1\n");
    if (sigaction(SIGUSR2, &sa, NULL) == -1)
        my_putstr("Error: cannot handle SIGUSR2\n");
    while (p->turn == 0)
        usleep(100);
}

void res_send(void)
{
    struct sigaction sa;
    sigset_t mask;

    sigemptyset(&mask);
    sa.sa_mask = mask;
    sa.sa_sigaction = handl_res_send;
    sa.sa_flags = SA_SIGINFO;
    if (sigaction(SIGUSR1, &sa, NULL) == -1)
        my_putstr("Error: cannot handle SIGUSR1\n");
    if (sigaction(SIGUSR2, &sa, NULL) == -1)
        my_putstr("Error: cannot handle SIGUSR2\n");
    while (p->turn == 0)
        usleep(100);
}
