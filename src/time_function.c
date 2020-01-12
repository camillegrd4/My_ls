/*
** EPITECH PROJECT, 2020
** time
** File description:
** time
*/

#include "my.h"

int time_function(char *dir, struct stat buf)
{
    char *time_function = malloc(sizeof(char) * 25);
    char *str = malloc(sizeof(char) * 8);
    int i = 4;
    int j = 0;
    if (!time || !time_function)
        return 84;
    time_function = ctime(&buf.st_mtime);

    while (i <= 15) {
        str[j] = time_function[i];
        i++;
        j++;
    }
    str[j] = '\0';
    if (my_putstr(str) == 84)
        return 84;
    return 0;
}