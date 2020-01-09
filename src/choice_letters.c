/*
** EPITECH PROJECT, 2020
** letters
** File description:
** letters
*/

#include "my.h"

int choice_letters(char **argv, int argc,
struct dirent *ent, DIR *rep)
{
    if (argv[1][0] == '-' && argv[1][1] == 'l') {
        if (!argv[2]) {
            my_ls_l(".", argc);
            return 0;
        }
        my_ls_l(argv[2], argc);
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
