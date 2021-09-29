/*
** EPITECH PROJECT, 2020
** file_content
** File description:
** duo_stumper
*/

#include "duo_stumper.h"
#include "my.h"

dir_t *sort_list(dir_t *dir)
{
    dir_t *new = NULL;
    dir_t *tmp = NULL;    
}

dir_t *init_list(DIR *dir)
{
    struct dirent *info;
    dir_t *list = NULL;

    while ((info = readdir(dir))) {
        if (info->d_name[0] != '.')
            my_put_in_list(&list, info->d_name);
    }
    return list;
}
