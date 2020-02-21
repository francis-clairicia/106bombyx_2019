/*
** EPITECH PROJECT, 2019
** 106bombyx_2019
** File description:
** main.c
*/

#include "bombyx.h"

static int print_help(void)
{
    printf("USAGE\n");
    printf("\t./106bombyx n [k | i0 i1]\n\n");
    printf("DESCRIPTION\n");
    printf("\tn\tnumber of first generation individuals\n");
    printf("\tk\tgrowth rate from 1 to 4\n");
    printf("\ti0\tinitial generation (included)\n");
    printf("\ti1\tfinal generation (included)\n");
    return (0);
}

static int error_check(int ac, char *av[])
{
    if (ac != 3 && ac != 4)
        return (1);
    if (!my_str_isnum(av[1]))
        return (1);
    if (ac == 3) {
        if (!my_str_isfloat(av[2]))
            return (1);
        if (strtod(av[2], NULL) < 1 || strtod(av[2], NULL) > 4)
            return (1);
    } else {
        if (!my_str_isnum(av[2]) || !my_str_isnum(av[3]))
            return (1);
        if (atoi(av[3]) < atoi(av[2]))
            return (1);
    }
    return (0);
}

int main(int ac, char *av[])
{
    if (ac == 2 && strcmp(av[1], "-h") == 0)
        return (print_help());
    if (error_check(ac, av))
        return (84);
    if (ac == 3)
        return (bombyx_with_given_k(atoi(av[1]), strtod(av[2], NULL)));
    return (bombyx_with_initial_generation(atoi(av[1]), atoi(av[2]), atoi(av[3])));
}