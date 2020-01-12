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
#include <errno.h>
#include <string.h>
#include <grp.h>
#include <pwd.h>
#include <time.h>

int my_ls(char **argv, int argc);
int my_strlen(char const *str);
int my_getnbr(char const *str);
int my_put_nbr(int nb);
int my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_ls_big_r(char *dir, struct dirent *ent);
int my_ls_function(struct dirent *ent, DIR *rep);
int my_ls_l();
char *file_to_inspect(char *ls, char *file);
char *my_strcat(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
char *my_strdup(char const *src);
char *my_strcpy(char *dest, char const *src);
void disp_total_block(char *rep);
char *concat_params(struct dirent *ent, char *path, char **argv);
int choice_letters(char **argv, int argc, struct dirent *ent,
DIR *rep);
int print_error_stat(char *tmp, struct stat buf);
int time_function(char *dir, struct stat buf);
char *add_dir_path(char *dest, char const *src);
int owner(struct stat buf);
int link_function(struct stat buf);
int rights_function(struct stat buf);
int total_function(struct stat buf);
int size_function(struct stat buf);
int my_flags(char str);
int call_function(struct stat buf, char *dir, struct dirent *ent);
int choice_letters_l(char **argv, int argc, struct dirent *ent,
DIR *rep);
int end_rights_functions_two(struct stat buf);
int end_rights_functions_one(struct stat buf);

#endif /* !my */
