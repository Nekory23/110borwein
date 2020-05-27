/*
** EPITECH PROJECT, 2020
** 110borwein
** File description:
** simpson 3/8 rule
*/

#include <stdio.h>
#include <math.h>
#include "borwein.h"

void simpson_bis(double n, double pi)
{
    double h = 0;
    double res = 0;
    double temp = 0;

    for (double a = 0, b = 0.5; b <= 5000; a += 0.5, b += 0.5) {
        h = a;
        temp = borwein(n, h);
        h = a + ((b - a) / 3);
        temp += 3 * borwein(n, h);
        h = a + (2 * ((b - a) / 3));
        temp += 3 * borwein(n, h);
        h = a + (3 * ((b - a) / 3));
        temp += borwein(n, h);
        temp *= ((3 * ((b - a) / 3)) / 8);
        res += temp;
    }
    pi = diff_pi(pi, res);
    printf("Simpson 3/8:\nI%.0f = %.10f\n", n, res);
    printf("diff = %.10f\n\n", pi);
}
