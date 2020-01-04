/*
** EPITECH PROJECT, 2019
** my_getnbr.c
** File description:
** my_getnbr.c
*/

#include "my.h"

int overflow(int result, int sign)
{
    if (result < 0 && sign == -1)
        return result;
    if (result > 0 && sign == 1)
        return result;
    return 0;
}

int get_value(char const *str, int i, int sign)
{
    int result = 0;

    while (str[i] != '\0' && ('0' <= str[i] && str[i] <= '9')) {
        result =  result * 10 + ((str[i] - 48) * sign);
        i++;
    }
    return result;
}

int my_getnbr(char const *str)
{
    int i = 0;
    int sign = 1;

    while (str[i] != '\0') {
        if (str[i] == '-') {
            sign = sign * (-1);
        }
        else if ('0' <= str[i] && str[i] <= '9')
            break;
        i++;
    }
    return overflow(get_value(str, i, sign), sign);
}