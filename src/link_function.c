/*
** EPITECH PROJECT, 2020
** link
** File description:
** link
*/

#include "my.h"

int link_function(struct stat buf)
{
    if (my_put_nbr((int) buf.st_nlink) == 84)
        return 84;
    if (my_putchar(' ') == 84)
        return 84;
    return 0;
}