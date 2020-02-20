/*
** EPITECH PROJECT, 2020
** navy
** File description:
** check if the postion of the boats is valid
*/

#include "navy.h"

int is_in_map(char **pos)
{
    for(int i = 0; i != 4; i++) {
        if (pos[i][2] < 'A' || pos[i][2] > 'H'){
            write(2, STR_ERROR_OUT, my_strlen(STR_ERROR_OUT));
            return (ERROR);
        }
        if (pos[i][5] < 'A' || pos[i][5] > 'H'){
            write(2, STR_ERROR_OUT, my_strlen(STR_ERROR_OUT));
            return (ERROR);
        }
    }
    for(int i = 0; i != 4; i++) {
        if (pos[i][3] < '1' || pos[i][3] > '8'){
            write(2, STR_ERROR_OUT, my_strlen(STR_ERROR_OUT));
            return (ERROR);
        }
        if (pos[i][6] < '1' || pos[i][6] > '8'){
            write(2, STR_ERROR_OUT, my_strlen(STR_ERROR_OUT));
            return (ERROR);
        }
    }
    return (SUCCESS);
}

int check_pos(char **pos)
{
    for (int i = 2, j = 0; j != 4; j++, i++)
        if (my_atoi(pos[j]) != i) {
            write(2, STR_ERROR_SIZE_B, my_strlen(STR_ERROR_SIZE_B));
            return (ERROR);
        }
    if (is_in_map(pos) == ERROR)
        return (ERROR);
    return (SUCCESS);
}
