/*
** EPITECH PROJECT, 2019
** concat_params.c
** File description:
** function that turns the command_line fiven arguments into a single string
*/

#include <stddef.h>
#include <stdlib.h>

int count(char **argv)
{
    int i = 0;
    int j = 0;
    int count = 0;

    while (argv[i] != NULL) {
        j = 0;
        while (argv[i][j] != '\0') {
            j++;
            count++;
        }
        i++;
    }
    return count;
}

char *concat_params(int argc, char **argv)
{
    int i = 0;
    int j = 0;
    int k = 0;
    char *dest = malloc(sizeof(char) * (count(argv) + 1) + argc);
    if (!dest) return NULL;
    while (argv[i] != NULL) {
        j = 0;
        while (argv[i][j] != '\0') {
            dest[k] = argv[i][j];
            j++;
            k++;
        }
        if (i < argc - 1) {
            dest[k] = '\n';
            k++;
        }
        i++;
    }
    dest[k] = '\0';
    return dest;
}
