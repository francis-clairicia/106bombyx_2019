/*
** EPITECH PROJECT, 2019
** 106bombyx_2019
** File description:
** bombyx.h
*/

#ifndef HEADER_BOMBYX
#define HEADER_BOMBYX

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

int my_str_isnum(char const *str);
int my_str_isfloat(char const *str);

int bombyx_with_given_k(int n, double k);
int bombyx_with_initial_generation(int n, int i0, int i1);

#endif