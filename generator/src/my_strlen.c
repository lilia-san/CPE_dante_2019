/*
** EPITECH PROJECT, 2019
** dante
** File description:
** my_strlen
*/

#include "../include/generator.h"

int my_strlen(char const *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}