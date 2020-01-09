/*
** EPITECH PROJECT, 2020
** ls
** File description:
** ls
*/

#include "my.h"

char my_ls_function(struct dirent *ent, DIR *rep)
{
    while ((ent = readdir(rep)) != NULL) {
        if (ent->d_name[0] != '.') {
            my_putstr(ent->d_name);
            my_putchar(' ');
        }
    }
    closedir(rep);
    my_putchar('\n');
}

char my_ls(char **argv, int argc)
{
    struct dirent *ent;
    DIR *rep = opendir(".");

    if (!rep)
        return 84;
    if (!argv[1]) {
        my_ls_function(ent, rep);
    }
    if (argv[1] != NULL) {
        choice_letters(argv, argc, ent, rep);
    }
    return 0;
}