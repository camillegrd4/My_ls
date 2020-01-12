/*
** EPITECH PROJECT, 2020
** choice
** File description:
** choice
*/

#include "my.h"

int choice_letters_l(char **argv, int argc, struct dirent *ent,
DIR *rep)
{
    if (!argv[2]) {
        rep = opendir(argv[1]);
        if (!rep)
            return 84;
        if (my_ls_function(ent, rep) == 84)
            return 84;
    }
    return 0;
}

int choice_letters(char **argv, int argc, struct dirent *ent,
DIR *rep)
{
    if (argv[1][0] == '-' && argv[1][1] == 'l') {
        if (!argv[2]) {
            if (my_ls_l(".") == 84)
                return 84;
            return 0;
        }
        if (my_ls_l(argv[2]) == 84)
            return 84;
        return 0;
    }
    if (argv[1][0] == '-' && argv[1][1] == 'R') {
        if (my_ls_big_r(argv[2], ent) == 84)
            return 84;
        return 0;
    }
    if (choice_letters_l(argv, argc, ent, rep) == 84)
        return 84;
    return 0;
}