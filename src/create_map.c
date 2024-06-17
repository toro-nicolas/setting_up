/*
** EPITECH PROJECT, 2023
** settingup
** File description:
** The create_map.c
*/

#include "../include/setting_up.h"

static void restart_pattern(int *pattern_index, int pattern_len)
{
    if (*pattern_index == pattern_len)
        *pattern_index = 0;
}

int create_map(int map_size, char *pattern)
{
    char *map = malloc(sizeof(char *) * map_size * map_size + map_size);
    int pattern_index = 0;
    int row = 0;
    int col = 0;
    int line = 0;

    for (; row < map_size; row++) {
        for (; col < map_size; col++) {
            map[(row * map_size) + col + line] = pattern[pattern_index];
            pattern_index = pattern_index + 1;
            restart_pattern(&pattern_index, my_strlen(pattern));
        }
        map[(row * map_size) + col + line] = '\n';
        line = line + 1;
        col = 0;
    }
    map[map_size * map_size + map_size] = '\0';
    place_square(map, map_size, map_size);
    my_putstr(map);
    return 0;
}
