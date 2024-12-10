#pragma once

#define SQR(x) ((x) * (x))

#define CUBE(x) (SQR(x) * (x))

double tab_func(double x, double y);

int user_input(double* a, double* b, double* hx, double* c, double* d, double* hy);

void help();

void tabulate(double a, double b, double hx, double c, double d, double hy);