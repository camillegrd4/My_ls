/*
** EPITECH PROJECT, 2020
** owner
** File description:
** owner
*/

#include "my.h"

char owner(struct stat buf)
{
    struct passwd *owner;
    struct group *group;

    owner = getpwuid(buf.st_uid);
    group = getgrgid(buf.st_gid);
    my_putstr(group->gr_name);
    my_putchar(' ');
    my_putstr(owner->pw_name);
    my_putchar('\n');
}
