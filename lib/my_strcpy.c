/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
** my_strcpy.c
*/

#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;
    int a = 0;

    while (src[i] != '\0') {
        dest[a] = src[i];
        i = i + 1;
        a = a + 1;
    }
    dest[a] = '\0';
    return dest;
}