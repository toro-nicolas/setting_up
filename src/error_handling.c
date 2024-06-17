/*
** EPITECH PROJECT, 2023
** settingup
** File description:
** The error_handling.c
*/

#include "../include/setting_up.h"

static int check_valid_pattern(char *pattern)
{
    if (my_strlen(pattern) == 0)
        return 0;
    for (int c = 0; c < my_strlen(pattern); c++) {
        if (!(pattern[c] == '.' || pattern[c] == 'o')) {
            return 0;
        }
    }
    return 1;
}

int search_error(int argc, char **argv)
{
    if (argc == 1) {
        my_putstr_error("No file specified\n");
        return 1;
    }
    if (argc > 3) {
        my_putstr_error("Too many open files\n");
        return 1;
    }
    if (argc == 2 && open(argv[1], O_RDONLY) < 1) {
        my_putstr_error("Can't open file\n");
        return 1;
    }
    if (argc == 3 &&
    (my_getnbr(argv[1]) < 1 || check_valid_pattern(argv[2]) == 0)) {
        my_putstr_error("Invalid argument(s)\n");
        return 1;
    }
    return 0;
}

int search_file_error(int file, int infos_status, struct stat *file_infos)
{
    char *map_str;

    if (file < 0 || infos_status < 0) {
        my_putstr_error("Cannot open or get file information\n");
        return 1;
    }
    if (S_ISREG(file_infos->st_mode) != 1) {
        my_putstr_error("The file is not a regular file\n");
        return 1;
    }
    if (file_infos->st_size == 0) {
        my_putstr_error("The file is empty\n");
        return 1;
    }
    return 0;
}

static int count_lines(char const *map_str)
{
    int counter = 0;

    for (int c = 0; map_str[c] != '\0'; c++) {
        if (map_str[c] == '\n')
            counter = counter + 1;
    }
    return counter - 1;
}

int search_map_str_error(char *map_str, int rows, int columns)
{
    if (rows == -1) {
        my_putstr_error("Invalid rows number\n");
        return 1;
    }
    if (columns == 0) {
        my_putstr_error("Rows are empty\n");
        return 1;
    }
    if (rows != count_lines(map_str)) {
        my_putstr_error(
        "Number of rows is different from the indicated number\n");
        return 1;
    }
    return 0;
}

static void check_map_error(char c)
{
    if (c == '\0') {
        my_putstr_error("Lines are not full\n");
        exit(84);
    }
    if (c != 'o' && c != '.') {
        my_putstr_error("Invalid characters detected in map\n");
        exit(84);
    }
}

int search_map_error(char **map, int rows, int columns)
{
    for (int row = 0; row < rows; row++) {
        for (int col = 0; col < columns; col++) {
            check_map_error(map[row][col]);
        }
    }
    return 0;
}
