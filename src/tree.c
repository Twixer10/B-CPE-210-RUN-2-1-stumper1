/*
** EPITECH PROJECT, 2021
** tree
** File description:
** duo_stumper
*/

#include "duo_stumper.h"
#include "my.h"

void do_tree(char *path, int scale)
{
    dir_t *dir = init_list(opendir(path));

    while (dir != NULL) {
        for (int i = 0; i != scale; i++)
            my_putstr("    ");
        (dir->next != NULL) ? my_putstr("|-- ") : my_putstr("`-- ");
        my_putstr(dir->name);
        my_putchar('\n');
        (opendir(dir->name) != NULL) ? do_tree(dir->name, scale = (scale == 1) ? 1 : ++scale) : 0;
        dir = dir->next;
    }
}
