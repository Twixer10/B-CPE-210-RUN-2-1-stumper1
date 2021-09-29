/*
** EPITECH PROJECT, 2020
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <stdlib.h>
#include <unistd.h>

void my_put_in_list(dir_t **list, char *name);
int list_size(dir_t *list);
void my_putchar(char c);
void my_putstr(char *str);

#endif
