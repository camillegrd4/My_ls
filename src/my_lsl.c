/*
** EPITECH PROJECT, 2020
** lsl
** File description:
** lsl
*/

#include "my.h"

char total_function(struct stat buf)
{
    my_putstr("total ");
}

char link_function(struct stat buf)
{
    my_put_nbr((int) buf.st_nlink);
    my_putchar(' ');
}

int size_function(struct stat buf)
{
    my_put_nbr((long) (buf.st_blksize));
    my_putchar('\n');
}

char my_ls_l(char *dir)
{
    DIR *rep = opendir(dir);
    struct dirent *ent;
    struct stat buf;
    const char *path = ent->d_name;

    total_function(buf);
    size_function(buf);
    while ((ent = readdir(rep)) != NULL) {
        if (ent->d_name[0] != '.') {
            char *tmp = add_dir_path(dir, ent->d_name);
            if (stat(tmp, &buf) == -1) {
                my_putstr("File not found");
                my_putchar('\n');
                return 84;
            }
            rights_function(buf);
            link_function(buf);
            owner(buf);
            my_put_nbr(buf.st_size);
            my_putchar(' ');
            time_function(dir, buf);
            my_putchar(' ');
            my_putstr(ent->d_name);
            my_putchar('\n');
        }
    }
    closedir(rep);
}