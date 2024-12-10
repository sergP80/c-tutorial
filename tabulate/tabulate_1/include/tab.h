#pragma once

#define SQR(x) ((x) * (x))

#define CUBE(x) (SQR(x) * (x))

double tab_func(double x);

int user_input(double* a, double* b, double* h);

void help();

void tabulate(double a, double b, double h);