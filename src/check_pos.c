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
            write_error(STR_ERROR_OUT);
            return (ERROR);
        }
        if (pos[i][5] < 'A' || pos[i][5] > 'H'){
            write_error(STR_ERROR_OUT);
            return (ERROR);
        }
    }
    for(int i = 0; i != 4; i++) {
        if (pos[i][3] < '1' || pos[i][3] > '8'){
            write_error(STR_ERROR_OUT);
            return (ERROR);
        }
        if (pos[i][6] < '1' || pos[i][6] > '8'){
            write_error(STR_ERROR_OUT);
            return (ERROR);
        }
    }
    return (SUCCESS);
}

int is_right_size(char **pos)
{
    for (int i = 0, j = 1; i != 4; i++, j++) {
        if (pos[i][2] == pos[i][5])
            if ((pos[i][6] - pos[i][3]) != j) {
                write_error(STR_ERROR_SIZE_B);
                return (ERROR);
            }
        if (pos[i][2] != pos[i][5])
            if ((pos[i][5] - pos[i][2]) != j) {
                write_error(STR_ERROR_SIZE_B);
                return (ERROR);
            }
    }
    return (SUCCESS);
}

int is_overlapping(char **pos)
{
    map_t *m = malloc(sizeof(map_t));

    fill_map(m);
    return (SUCCESS);
}

int check_pos(char **pos)
{
    for (int i = 2, j = 0; j != 4; j++, i++)
        if (my_atoi(pos[j]) != i) {
            write_error(STR_ERROR_SIZE_B);
            return (ERROR);
        }
    if (is_right_size(pos) == ERROR)
        return (ERROR);
    if (is_in_map(pos) == ERROR)
        return (ERROR);
    if (is_overlapping(pos) == ERROR)
        return (ERROR);
    return (SUCCESS);
}
