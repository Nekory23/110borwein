/*
** EPITECH PROJECT, 2020
** 110borwein
** File description:
** compute borwein
*/

#include <math.h>
#include "borwein.h"

double diff_pi(double pi, double res)
{
    double n_pi = res - pi;

    if (n_pi >= 0)
        return (n_pi);
    else
        return (-n_pi);
}

double borwein(double n, double x)
{
    double temp = 0;
    double res = 0;
    double res1 = 0;
    double res2 = 0;

    if (x == 0)
        return (1);
    for (double k = 0; k <= n; k++) {
        temp = (2 * k) + 1;
        res1 = sin(x / temp);
        res2 = x / temp;
        if (k != 0)
            res *= (res1 / res2);
        else
            res = (res1 / res2);
    }
    return (res);
}
