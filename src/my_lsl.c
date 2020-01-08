/*
** EPITECH PROJECT, 2020
** lsl
** File description:
** lsl
*/

#include "my.h"

char owner(struct stat buf)
{
    struct passwd *owner;
    struct group *group;

    owner = getpwuid(buf.st_uid);
    group = getgrgid(buf.st_gid);
    my_putstr(group->gr_name);
    my_putchar(' ');
    my_putstr(owner->pw_name);
    my_putchar('\n');
}

char my_ls_l(char *dir)
{
    DIR *rep = opendir(dir);
    struct dirent *ent;
    struct stat buf;

    const char *path = ent->d_name;

    while ((ent = readdir(rep)) != NULL) {
        if (ent->d_name[0] != '.') {
            char *tmp = add_dir_path(dir, ent->d_name);
            if (stat(tmp, &buf) == -1) {
                my_putstr("File not found");
                my_putchar('\n');
                return 84;
            }
            owner(buf);
        }
    }
    closedir(rep);
}