#include "tab.h"

#include <math.h>
#include <stdio.h>

double tab_func(double x, double y) {
    return (SQR(x) - SQR(y)) / (x * y);
}

void help() {
    printf("Tabulate function of 2 args in given range\n");
}

int user_input(double *a, double *b, double *hx, double *c, double *d, double *hy) {
    printf("Enter a b hx: ");

    int ret = scanf("%lf %lf %lf", a, b, hx);

    if (ret != 3) {
        return -1;
    }

    printf("Enter a b hx: ");

    ret = scanf("%lf %lf %lf", c, d, hy);

    if (ret != 3) {
        return -1;
    }

    return 0;
}

void print_header(double a, double b, double hx) {
    printf("y\\x\t\t");

    for (double x = a; x <= b; x += hx) {
        printf("%.3f\t", x);
    }
}

void tabulate(double a, double b, double hx, double c, double d, double hy) {
    printf("Tabulate function 2d:\n");

    print_header(a, b, hx);

    for (double y = c; y <= d; y += hy) {
        printf("%.3f\t", y);

        for (double x = a; x <= b; x += hx) {
            double z = tab_func(x, y);

            printf("%.3f\t", z);
        }
    }
}
