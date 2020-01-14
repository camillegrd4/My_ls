/*
** EPITECH PROJECT, 2020
** ls
** File description:
** ls
*/

#include "my.h"

int my_ls_function(struct dirent *ent, DIR *rep)
{
    while ((ent = readdir(rep)) != NULL) {
        if (ent->d_name[0] != '.') {
            my_putstr(ent->d_name);
            my_putchar(' ');
        }
    }
    closedir(rep);
    if (my_putchar('\n') == 84)
        return 84;
}

int my_ls(char **argv, int argc)
{
    struct dirent *ent;
    DIR *rep = opendir(".");

    if (!rep)
        return 84;
    if (!argv[1]) {
        if (my_ls_function(ent, rep) == 84)
            return 84;
    }
    if (argv[1] != NULL) {
        if (choice_letters(argv, argc, ent, rep) == 84)
            return 84;
    }
    return 0;
}