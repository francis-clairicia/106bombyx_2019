/*
** EPITECH PROJECT, 2019
** My str_isnum()
** File description:
** test if a string has only digits character
*/

#include <stddef.h>

int my_str_isnum(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (0);
    while (str[i] != '\0') {
        if ((str[i] < '0') || (str[i] > '9'))
            return (0);
        i += 1;
    }
    return (1);
}

int my_str_isfloat(char const *str)
{
    int i = 0;
    int dot = 0;

    if (str == NULL)
        return (0);
    while (str[i] != '\0') {
        if (str[i] == '.')
            dot += 1;
        else if ((str[i] < '0') || (str[i] > '9'))
            return (0);
        if (dot == 2)
            return (0);
        i += 1;
    }
    return (1);
}
