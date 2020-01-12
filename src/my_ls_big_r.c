/*
** EPITECH PROJECT, 2020
** big
** File description:
** big
*/

#include "my.h"



int my_ls_big_r(char *dir, struct dirent *ent)
{
    DIR *rep = opendir(dir);

    if (!rep)
        return 84;
    while ((ent = readdir(rep)) != NULL) {
        if (ent->d_name[0] != '.') {
            if (my_putstr(ent->d_name) == 84 || my_putchar(' ') == 84)
                return 84;
            my_ls_function(ent, rep);
        }
    }
    closedir(rep);
    if (my_putchar('\n') == 84)
        return 84;
}