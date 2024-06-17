/*
** EPITECH PROJECT, 2023
** settingup
** File description:
** The get_colums.c
*/

#include "../include/setting_up.h"

static int is_number(char c)
{
    if (c > 47 && c < 58)
        return 1;
    return 0;
}

static void detect_number(int *enable, char const *buffer, int *index, int *c)
{
    if (*enable == 0 && is_number(buffer[*c]) == 1) {
        *enable = 1;
        *index = *c;
    }
    while (*enable == 1 && *c != 0 &&
        (buffer[*c - 1] == '+' || buffer[*c - 1] == '-')) {
        *index = *index - 1;
        *c = *c - 1;
    }
}

int get_rows(char const *map_str, struct stat *infos)
{
    char *temp = malloc(sizeof(char) * infos->st_size);
    int enable = 0;
    int index = 0;
    int c = 0;

    for ( ; !(map_str[c] == '\n' || map_str[c] == '\0'); c++) {
        detect_number(&enable, map_str, &index, &c);
        if (enable == 1 || enable == 2) {
            enable = 2;
            temp[c - index] = map_str[c];
        }
    }
    temp[c] = '\0';
    if (my_getnbr(temp) < 1)
        return -1;
    else
        return my_getnbr(temp);
}

int get_columns(char const *map_str)
{
    int lines = 0;
    int columns = 0;

    for (int c = 0; map_str[c] != '\0'; c++) {
        if (map_str[c] == '\n' || map_str[c] == '\0') {
            lines = lines + 1;
        }
        if (lines == 1)
            columns = columns + 1;
        if (lines == 2)
            return columns - 1;
    }
    return 0;
}

void get_size(char *map_str, struct stat *infos, int *rows, int *columns)
{
    *rows = get_rows(map_str, infos);
    *columns = get_columns(map_str);
}
