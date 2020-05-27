/*
** EPITECH PROJECT, 2020
** 110borwein
** File description:
** start
*/

#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "error_msg.h"
#include "borwein.h"

int display_help(void)
{
    printf("USAGE\n    ./110borwein n\n\n");
    printf("DESCRIPTION\n    n\tconstant defining the integral ");
    printf("to be computed\n");
    return (SUCCESS);
}

int start(int ac, char **av)
{
    double pi = M_PI / 2;
    double n;

    if (ac != 2)
        return (write_error(STR_ERROR_ARG));
    if (my_strcmp(av[1], "-h"))
        return (display_help());
    if (error_handling(av[1]))
        return (ERROR);
    n = atof(av[1]);
    midpoint(n, pi);
    trapezoidal(n, pi);
    simpson(n, pi);
    simpson_bis(n, pi);
    boole_rule(n, pi);
    return (SUCCESS);
}

