/*
** EPITECH PROJECT, 2019
** dante
** File description:
** my_strcmp
*/

#include "../include/generator.h"

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        i++;
    if (s1[i] == s2[i])
        return (0);
    else
        return (s1[i] - s2[i]);
}