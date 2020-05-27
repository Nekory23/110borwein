/*
** EPITECH PROJECT, 2020
** 110
** File description:
** start
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "borwein.h"

void midpoint(double n, double pi)
{
    double res = 0;
    double res1 = 0;

    for (double a = 0, b = 0.5; b <= 5000; a += 0.5, b += 0.5) {
        res1 = borwein(n, ((a + b) / 2));
        res1 *= b - a;
        res += res1;
    }
    pi = diff_pi(pi, res);
    printf("Midpoint:\nI%.0f = %.10f\n", n, res);
    printf("diff = %.10f\n\n", pi);
}

void trapezoidal(double n, double pi)
{
    double res = 0;
    double temp = 0;

    for (double a = 0, b = 0.5; b <= 5000; a += 0.5, b += 0.5) {
        temp = borwein(n, a) + borwein(n, b);
        temp *= ((b - a) / 2);
        res += temp;
    }
    pi = diff_pi(pi, res);
    printf("Trapezoidal:\nI%.0f = %.10f\n", n, res);
    printf("diff = %.10f\n\n", pi);
}

void simpson(double n, double pi)
{
    double res = 0;
    double temp = 0;

    for (double a = 0, b = 0.5; b <= 5000; a += 0.5, b += 0.5) {
        temp = borwein(n, a) + borwein(n, b);
        temp += 4 * borwein(n, ((a + b) / 2));
        temp *= ((b - a) / 6);
        res += temp;
    }
    pi = diff_pi(pi, res);
    printf("Simpson:\nI%.0f = %.10f\n", n, res);
    printf("diff = %.10f\n\n", pi);
}
