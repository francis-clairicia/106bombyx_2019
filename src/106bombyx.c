/*
** EPITECH PROJECT, 2019
** 106bombyx_2019
** File description:
** 106bombyx.c
*/

#include "bombyx.h"

static double logistic_equation(double x, double k)
{
    double new_x = k * x * ((1000 - x) / 1000);

    if (new_x < 0)
        return (0);
    return (new_x);
}

int bombyx_with_given_k(int n, double k)
{
    int i = 0;
    double x = n;

    for (i = 0; i < 100; i += 1) {
        printf("%d %.2f\n", i + 1, x);
        x = logistic_equation(x, k);
    }
    return (0);
}

int bombyx_with_initial_generation(int n, int i0, int i1)
{
    int i = 0;
    double x = n;
    double k = 1;
    double increment_k = 0.01;

    while (k <= 4) {
        for (i = 0; i < i0; i += 1)
            x = logistic_equation(x, k);
        for (i = i0; i <= i1; i += 1) {
            printf("%.2f %.2f\n", k, x);
            x = logistic_equation(x, k);
        }
        k += increment_k;
    }
    return (0);
}