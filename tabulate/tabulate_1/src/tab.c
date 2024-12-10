#include "tab.h"

#include <math.h>
#include <stdio.h>

double tab_func(double x)
{
    if (x <= -1.0) {
        return 3 * SQR(x) - 2 * fabs(x);
    }

    if (x > -1.0 && x < 1.0) {
        return 4 * x - fabs(x)/(x - 2.0);
    }

    return CUBE(x) + 2 * sqrt(x);
}

int user_input(double *a, double *b, double *h) {
    printf("Enter a b h: ");

    int ret = scanf("%lf %lf %lf", a, b, h);

    if (ret != 3) {
        return -1;
    }

    return 0;
}

void help() {
    printf("Tabulate function of 1 arg in given range\n");
}

void tabulate(double a, double b, double h)
{
    printf("x\t\ty\n");

    for (double x = a; x <= b; x += h) {
        double y = tab_func(x);

        printf("%.3f\t%.3f\n", x, y);
    }
}
