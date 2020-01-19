/*
** EPITECH PROJECT, 2020
** size
** File description:
** size
*/

#include "my.h"

int size_function(struct stat buf)
{
    if (my_put_nbr((long) (buf.st_blksize)) == 84)
        return 84;
    if (my_putchar('\n') == 84)
        return 84;
    return 0;
}