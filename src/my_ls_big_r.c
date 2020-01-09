/*
** EPITECH PROJECT, 2020
** big
** File description:
** big
*/

#include "my.h"



char my_ls_big_r(struct dirent *ent, DIR *rep)
{
    while ((ent = readdir(rep)) != NULL) {
        if (ent->d_name[0] != '.') {
            my_putstr(ent->d_name);
            my_putchar(' ');
            my_ls_function(ent, rep);
        }
    }
}
