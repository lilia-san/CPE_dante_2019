/*
** EPITECH PROJECT, 2019
** dante
** File description:
** my_putstr
*/

#include "../include/generator.h"

void my_putstr(char const *str)
{
    for (int i = 0; str[i] != '\0'; i++)
        write(1, &str[i], 1);
}