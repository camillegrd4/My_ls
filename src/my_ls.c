/*
** EPITECH PROJECT, 2020
** ls
** File description:
** ls
*/

#include "my.h"

char my_ls_big_r(struct dirent *ent, DIR *rep)
{
    while ((ent = readdir(rep)) != NULL) {
        if (ent->d_name[0] != '.') {
            if (rep != NULL) {
                rep = opendir(".");
                my_putstr(ent->d_name);
            }
            my_putstr(ent->d_name);
            my_putchar(' ');
        }
    }
    closedir(rep);
    my_putchar('\n');
}

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

char my_ls(char **argv)
{
    struct dirent *ent;
    DIR *rep = opendir(".");

    if (!rep)
        return 84;
    if (!argv[1]) {
        my_ls_function(ent, rep);
    }
    if (argv[1] != NULL) {
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
    return 0;
}