/*
** EPITECH PROJECT, 2023
** settingup
** File description:
** The edit_map.c
*/

#include "../include/setting_up.h"

char **get_only_map(char const *map_str, int nb_rows, int nb_cols)
{
    char **map = malloc(sizeof(char *) * nb_rows);
    int start = 0;

    for ( ; map_str[start] != '\n'; start++);
    for (int row = 0; row < nb_rows; row++) {
        map[row] = malloc((sizeof(char) * (nb_cols + 1)));
    }
    for (int row = 0; row < nb_rows; row++) {
        for (int col = 0; col < nb_cols; col++) {
            map[row][col] = map_str[start + 1 + (row  * nb_cols) + row + col];
        }
        map[row][nb_cols] = '\0';
    }
    return map;
}

int edit_map(char *file_path)
{
    int file = open(file_path, O_RDONLY);
    struct stat file_infos;
    int infos_status = stat(file_path, &file_infos);
    char *map;
    int rows = 0;
    int columns = 0;

    if (search_file_error(file, infos_status, &file_infos) == 1)
        return 84;
    map = malloc(sizeof(char) * (file_infos.st_size + 1));
    map[read(file, map, file_infos.st_size)] = '\0';
    get_size(map, &file_infos, &rows, &columns);
    if (search_map_str_error(map, rows, columns) == 1)
        return 84;
    //search_map_error(map, rows, columns);
    //place_square(map, rows, columns);
    my_putstr(map);
    return 0;
}

/*
int file = open(filepath, O_RDONLY);
struct stat infos;
int status = stat(filepath, &infos);
char *map = malloc(sizeof(char) * infos.st_size);

if (file >= 0 && status >= 0 && infos.st_size) {
read(file, map, infos.st_size);
return map;
} else {
return NULL;
}*/
