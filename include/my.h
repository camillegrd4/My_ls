/*
** EPITECH PROJECT, 2020
** my
** File description:
** my
*/

#ifndef my
#define my

#include <sys/types.h>
#include <dirent.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <grp.h>
#include <pwd.h>

char my_ls(char **argv);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
char my_ls_big_r(struct dirent *ent, DIR *rep);

#endif /* !my */
