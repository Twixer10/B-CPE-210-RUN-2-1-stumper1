/*
** EPITECH PROJECT, 2020
** my_params_to_list
** File description:
** linked list
*/

#include "duo_stumper.h"
#include "my.h"

void my_put_in_list(dir_t **list, char *name)
{
    dir_t *new_node = malloc(sizeof(dir_t));

    new_node->name = name;
    new_node->sorted = 0;
    new_node->next = *list;
    *list = new_node;
}

int list_size(dir_t *list)
{
    int i = 0;

    for (; list != NULL; list = list->next)
        i++;
    return i;
}
