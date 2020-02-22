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

typedef struct map
{
    char **map;
} map_t;

int start(int ac, char **av);
char **split_pos(char *buffer);
int player_one(void);

int display_h(void);
int error_handling(int ac, char **av);
char *clean_buffer(char *buffer);
int count_boats(char *buffer);
int check_pos(char **pos);

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_strcmp(char const *str1, char const *str2);
int my_put_nbr(int nb);
int my_atoi(char const *str);
void write_error(char *str);

void fill_map(map_t *m);

#define SUCCESS 0
#define ERROR 84
#define FALSE 0
#define TRUE 1

#define READ_SIZE 32

#define USE "./navy [first_player_pid] navy_positions\n"
#define FPP "only for the 2nd player.  pid of the first player.\n"
#define NP "file representing the positions of the ships.\n"

#define STR_ERROR_ARG "this program must take 2 or 3 arguments\n"
#define STR_ERROR_OPEN "could not open or read file\n"
#define STR_ERROR_NBR "there must be 4 boats in the file\n"
#define STR_ERROR_SIZE_B "the size of the boats are invalid\n"
#define STR_ERROR_OUT "one or more boat is outside the map\n"

#endif
