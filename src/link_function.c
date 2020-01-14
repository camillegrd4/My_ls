/*
** EPITECH PROJECT, 2020
** link
** File description:
** link
*/

#include "my.h"

int link_function(struct stat buf)
{
    my_put_nbr((int) buf.st_nlink);
    if (my_putchar(' ') == 84)
        return 84;
    return 0;
}