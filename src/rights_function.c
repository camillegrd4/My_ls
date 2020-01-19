/*
** EPITECH PROJECT, 2020
** rights
** File description:
** rights
*/

#include "my.h"

int end_rights_functions_one(struct stat buf)
{
    if ((buf.st_mode & S_ISGID) && !(buf.st_mode & S_IXGRP)) {
        if (my_putstr("S") == 84)
            return 84;
    }
    else if ((buf.st_mode & S_ISGID) && (buf.st_mode & S_IXGRP)) {
        my_putstr("s");
    } else {
        my_putstr((buf.st_mode & S_IXGRP) ? ("x") : ("-"));
        my_putstr(buf.st_mode & S_IROTH ? "r" : "-");
        my_putstr(buf.st_mode & S_IWOTH ? "w" : "-");
    }
}

int end_rights_functions_two(struct stat buf)
{
    if ((buf.st_mode & S_ISVTX) && !(buf.st_mode & S_IXOTH)) {
        if (my_putstr("T ") == 84)
            return 84;
    }
    else if ((buf.st_mode & S_ISVTX) && (buf.st_mode & S_IXOTH)) {
        my_putstr("t");
    } else {
        my_putstr((buf.st_mode & S_IXOTH) ? ("x") : ("-"));
        my_putchar('.');
    }
    return 0;
}

int rights_function(struct stat buf)
{
    if (my_putstr(S_ISDIR(buf.st_mode) ? "d" : "-") == 84
    || my_putstr(buf.st_mode & S_IRUSR ? "r" : "-") == 84
    || my_putstr(buf.st_mode & S_IWUSR ? "w" : "-") == 84
    || my_putstr(buf.st_mode & S_IXUSR ? "x" : "-") == 84
    || my_putstr(buf.st_mode & S_IRGRP ? "r" : "-") == 84
    || my_putstr(buf.st_mode & S_IWGRP ? "w" : "-") == 84
    || end_rights_functions_one(buf) == 84
    || end_rights_functions_two(buf) == 84)
        return 84;
    if (my_putchar(' ') == 84)
        return 84;
    return 0;
}