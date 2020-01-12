/*
** EPITECH PROJECT, 2020
** owner
** File description:
** owner
*/

#include "my.h"

int owner(struct stat buf)
{
    struct passwd *owner = NULL;
    struct group *group = NULL;

    owner = getpwuid(buf.st_uid);
    group = getgrgid(buf.st_gid);
    if (!owner || !group)
        return 84;
    if (my_putstr(group->gr_name) == 84 || my_putchar(' ') == 84)
        return 84;
    if (my_putstr(owner->pw_name) == 84 || my_putchar(' ') == 84)
        return 84;
    return 0;
}
