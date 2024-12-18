#pragma once

#include <stdio.h>
#include <math.h>

struct Person {
    int id;
    int age;
    char name[65];
};

typedef struct Person PERSON;
typedef struct Person *PPERSON;

void print(PPERSON p);

void print_array(PERSON list[], int size);

PPERSON find_by_max_age(PERSON list[], int size);

int find_first_by_name(PERSON list[], int size, char* name);
