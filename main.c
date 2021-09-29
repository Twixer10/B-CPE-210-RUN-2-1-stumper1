/*
** EPITECH PROJECT, 2021
** main
** File description:
** duo_stumper
*/

#include "duo_stumper.h"
#include "my.h"

int main(int ac, char **av)
{
    if (ac != 1) {
        for (int i = 1; av[i] != NULL; i++) {
            my_putstr(av[i]);
            my_putchar('\n');
            do_tree(av[i], 0);
        }
    }else {
        my_putstr(".\n");
        do_tree(".", 0);
    }
    my_putchar('\n');
}
