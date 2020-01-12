/*
** EPITECH PROJECT, 2020
** lsl
** File description:
** lsl
*/

#include "my.h"

int total_function(struct stat buf)
{
    if (my_putstr("total ") == 84)
        return 84;
    return 0;
}

int link_function(struct stat buf)
{
    my_put_nbr((int) buf.st_nlink);
    if (my_putchar(' ') == 84)
        return 84;
    return 0;
}

int size_function(struct stat buf)
{
    my_put_nbr((long) (buf.st_blksize));
    if (my_putchar('\n') == 84)
        return 84;
    return 0;
}

int call_function(struct stat buf, char *dir, struct dirent *ent)
{
    if (rights_function(buf) == 84 || link_function(buf) || owner(buf) == 84)
        return 84;
    my_put_nbr(buf.st_size);
    if (my_putchar(' ') == 84 || time_function(dir, buf) == 84)
        return 84;
    if (my_putchar(' ') == 84 || my_putstr(ent->d_name) == 84)
        return 84;
    if (my_putchar('\n') == 84)
        return 84;
    return 0;
}

int print_error_stat(char *tmp, struct stat buf)
{
    if (my_putstr("File not found") == 84)
        return 84;
    if (my_putchar('\n') == 84)
        return 84;
    return 84;
}

int my_ls_l(char *dir)
{
    DIR *rep = opendir(dir);
    struct dirent *ent;
    char *tmp = NULL;
    struct stat buf;
    const char *path = ent->d_name;
    if (!path || !rep || total_function(buf) == 84 || size_function(buf) == 84)
        return 84;
    while ((ent = readdir(rep)) != NULL) {
        if (ent->d_name[0] != '.') {
            if (!(tmp = add_dir_path(dir, ent->d_name)))
                return 84;
            if (stat(tmp, &buf) == -1) {
                print_error_stat(tmp, buf);
                return 84;
            }
            if (call_function(buf, dir, ent) == 84)
                return 84;
        }
    }
    closedir(rep);
    return 0;
}