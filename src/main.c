/*
** EPITECH PROJECT, 2023
** settingup
** File description:
** The main.c
*/

#include "../include/setting_up.h"

int main(int argc, char **argv)
{
    if (search_error(argc, argv) == 1)
        return 84;
    if (argc == 2)
        return edit_map(argv[1]);
    if (argc == 3)
        return create_map(my_getnbr(argv[1]), argv[2]);
}
