/*
** EPITECH PROJECT, 2020
** letters
** File description:
** letters
*/

#include "my.h"

int choice_letters(char **argv, struct dirent *ent, DIR *rep)
{
    if (argv[1][0] == '-' && argv[1][1] == 'l') {
        my_ls_l(argv[2]);
        return 0;
    }
    if (argv[1][0] == '-' && argv[1][1] == 'R') {
        my_ls_big_r(ent, rep);
    }
    if (!argv[2]) {
        rep = opendir(argv[1]);
        if (!rep)
            return 84;
        my_ls_function(ent, rep);
        return 0;
    }
}
