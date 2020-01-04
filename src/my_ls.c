/*
** EPITECH PROJECT, 2020
** ls
** File description:
** ls
*/

#include "my.h"

char my_ls(int argc, char **argv)
{
    struct dirent *ent;
    DIR *rep = opendir(argv[2]);

    if (!rep)
        return 84;
    if (argv[1] = "-R") {
        my_putstr(argv[2]);
        my_putstr(":\n");
        while ((ent = readdir(rep)) != NULL) {
            if (ent->d_name[0] != '.') {
                my_putstr(ent->d_name);
                my_putchar(' ');
            }
        }
        closedir(rep);
        my_putchar('\n');
        }
    return 0;
}