/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#ifndef DUO_STUMPER_H_
#define DUO_STUMPER_H_

#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <dirent.h>

typedef struct directories
{
    char *name;
    int sorted;
    struct directories *next;
}dir_t;

void file_content(DIR *dir);
void do_tree(char *path, int scale);
dir_t *init_list(DIR *dir);

#endif
