/*
** EPITECH PROJECT, 2023
** settingup
** File description:
** The place_square.c
*/

#include "../include/setting_up.h"

static void check_barrier(int *result, char c)
{
    if (c == 'o')
        *result = 0;
}

int is_square_of_size(char *map, int row, int col, int square_size)
{
    int result = 1;

    for (int y = 0; y < square_size; y++) {
        for (int x = 0; x < square_size; x++) {
            check_barrier(&result, map[((y + row) * row) + x + y + col +
            y]);
        }
        if (result == 0) {
            break;
        }
    }
    return result;
}

int  find_biggest_square(char *map, int const *map_size, int
    best_square_size, int *position)
{
    int square_size = best_square_size;

    if (position[0] > map_size[0] || position[1] > map_size[1])
        return 0;
    while (position[0] + square_size <= map_size[0] &&
        position[1] + square_size <= map_size[1] &&
        is_square_of_size(map, position[0], position[1],
        square_size) == 1) {
        square_size++;
    }
    return square_size - 1;
}

void check_better_square_found(int *square_size, int const square_size_temp,
    int **position, int const *temp_position)
{
    if (*square_size < square_size_temp) {
        *square_size = square_size_temp;
        *position[0] = temp_position[0];
        *position[1] = temp_position[1];
    }
}

void find_biggest_place(char *map, int **position,
    int *map_size, int *square_size)
{
    int square_size_temp = 0;
    int temp_position[2] = {0, 0};

    for ( ; temp_position[0] < map_size[0]; temp_position[0]++) {
        for ( ; temp_position[1] < map_size[1]; temp_position[1]++) {
            square_size_temp = find_biggest_square(map,
            map_size, *square_size, temp_position);
            check_better_square_found(square_size, square_size_temp,
            position, temp_position);
        }
        temp_position[1] = 0;
    }
}

int place_square(char *map, int nb_rows, int nb_cols)
{
    int x = 0;
    int y = 0;
    int *position[2] = {&x, &y};
    int map_size[2] = {nb_rows, nb_cols};
    int square_size = 0;

    find_biggest_place(map, position, map_size, &square_size);
    for (int row = 0; row < square_size; row++) {
        for (int col = 0; col < square_size; col++) {
            map[((row + y) * nb_cols) + col + row + x + y] = 'x';
        }
    }
    return 0;
}
