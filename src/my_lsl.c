/*
** EPITECH PROJECT, 2020
** lsl
** File description:
** lsl
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

char my_ls_l(char *dir)
{
    DIR *rep = opendir(dir);
    struct dirent *ent;
    int argc;
    struct stat buf;
    struct passwd *owner;
    struct group *group;
    const char *path = ent->d_name;

    while ((ent = readdir(rep)) != NULL) {
        if (ent->d_name[0] != '.') {
            char *tmp = add_dir_path(dir, ent->d_name);
            if (stat(tmp, &buf) == -1) {
                my_putstr("File not found");
                my_putchar('\n');
                return 84;
            }
            owner = getpwuid(buf.st_uid);
            group = getgrgid(buf.st_gid);
            my_putstr(group->gr_name);
            my_putchar(' ');
            my_putstr(owner->pw_name);
            my_putchar('\n');
        }
    }
    closedir(rep);
}