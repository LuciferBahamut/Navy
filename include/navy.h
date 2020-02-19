/*
** EPITECH PROJECT, 2019
** navy
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <time.h>
#include <pwd.h>
#include <grp.h>
#include <errno.h>

int start(int ac, char **av);
<<<<<<< HEAD

void display_h(void);
int error_handling(int ac, char **av);
=======
void display_h(void);
void my_putchar(char c);
int my_putstr(char const *str);
>>>>>>> fc5cf7327d51da7b9dcf77f1ad7fc782759f3d3f

#define SUCCESS 0
#define ERROR 84

#define FALSE 0
#define TRUE 1

#define USE "./navy [first_player_pid] navy_positions\n"
#define FPP "only for the 2nd player.  pid of the first player.\n"
#define NP "file representing the positions of the ships.\n"

#define STR_ERROR_ARG "this program must take 2 or 3 arguments\n"

#endif
