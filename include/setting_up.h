/*
** EPITECH PROJECT, 2023
** settingup
** File description:
** The setting_up.h
*/

#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/sysmacros.h>
#include "../lib/my/flags/my.h"

#ifndef SETTING_UP_H
    #define SETTING_UP_H

int search_error(int argc, char **argv);
int print_map(char **map, int nb_rows, int nb_cols);
int place_square(char *map, int nb_rows, int nb_cols);
int search_file_error(int file, int infos_status, struct stat *file_infos);
void get_size(char *map_str, struct stat *infos, int *rows, int *columns);
int search_map_str_error(char *map_str, int rows, int columns);
int search_map_error(char **map, int rows, int columns);
int edit_map(char *file_path);
int create_map(int map_size, char *pattern);

#endif /* SETTING_UP_H */
