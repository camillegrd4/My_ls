/*
** EPITECH PROJECT, 2020
** rights
** File description:
** rights
*/

#include "my.h"

char end_rights_functions(struct stat buf)
{
    if ((buf.st_mode & S_ISGID) && !(buf.st_mode & S_IXGRP))
    	my_putstr("S");
    else if ((buf.st_mode & S_ISGID) && (buf.st_mode & S_IXGRP))
    	my_putstr("s");
    else
    	my_putstr((buf.st_mode & S_IXGRP) ? ("x") : ("-"));
        my_putstr(buf.st_mode & S_IROTH ? "r" : "-");
        my_putstr(buf.st_mode & S_IWOTH ? "w" : "-");
    if ((buf.st_mode & S_ISVTX) && !(buf.st_mode & S_IXOTH))
    	my_putstr("T ");
    else if ((buf.st_mode & S_ISVTX) && (buf.st_mode & S_IXOTH))
    	my_putstr("t");
    else
    	my_putstr((buf.st_mode & S_IXOTH) ? ("x") : ("-"));
    my_putchar('.');
}

char rights_function(struct stat buf)
{
    my_putstr(S_ISDIR(buf.st_mode) ? "d" : "-");
    my_putstr(buf.st_mode & S_IRUSR ? "r" : "-");
    my_putstr(buf.st_mode & S_IWUSR ? "w" : "-");
    my_putstr(buf.st_mode & S_IXUSR ? "x" : "-");
    my_putstr(buf.st_mode & S_IRGRP ? "r" : "-");
    my_putstr(buf.st_mode & S_IWGRP ? "w" : "-");
    end_rights_functions(buf);
    my_putchar(' ');
}