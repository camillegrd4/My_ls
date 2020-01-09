/*
** EPITECH PROJECT, 2019
** my_flags.
** File description:
** my_flags
*/

#include "my.h"

int my_flags(char str)
{
    int i = 0;
    char *flags = "lR";

    while (flags[i] != '\0') {
        if (str == flags[i])
            return (1);
        i = i + 1;
    }
    return (0);
}