/*
** EPITECH PROJECT, 2020
** path
** File description:
** path
*/

#include "my.h"

char *add_dir_path(char *dest, char const *src)
{
    int i = 0;
    int count = 0;
    char *res;
    res = malloc(sizeof(*res) * (my_strlen(dest) + my_strlen(src) + 2));

    while (dest[i]) {
    	res[i] = dest[i];
    	i++;
    }
    res[i] = '/';
    i += 1;
    while (src[count]) {
    	res[i + count] = src[count];
    	count++;
    }
    res[i + count] = '\0';
    return (res);
}