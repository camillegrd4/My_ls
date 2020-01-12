/*
** EPITECH PROJECT, 2019
** my_putstr.c
** File description:
** my_putstr.c
*/

#include "my.h"

int my_putint(int *str)
{
    int i = 0;

    while (str[i] != -2) {
        if (str[i] == -1) {
            if (my_putchar('\n') == 84)
                return 84;
        } else
            my_put_nbr(str[i]);
        i++;
    }
    my_put_nbr(-2);
    if (my_putchar('\n') == 84)
        return 84;
    return 0;
}

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (my_putchar(str[i]) == 84)
            return 84;
        i++;
    }
    return 0;
}
