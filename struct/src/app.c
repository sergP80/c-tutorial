#include "app.h"

#include <stdlib.h>
#include <string.h>

void print(PPERSON p)
{
    printf("id=%d\n", p->id);
    printf("name=%s\n", p->name);
    printf("age=%d\n", p->age);
}

void print_array(PERSON list[], int size)
{
    for (int i = 0; i < size; i++)
    {
        print(list + i);

        printf("====================\n");
    }
}

PPERSON find_by_max_age(PERSON list[], int size) {

    PPERSON result = NULL;

    for (int i = 0; i < size; i++)
    {
        if (!result)
        {
            result = &list[i];
        } else if (result->age < list[i].age) {
            result = &list[i];
        }
    }

    return result;
}

int find_first_by_name(PERSON list[], int size, char *name)
{
    for (int i = 0; i < size; i++) {
        if (strstr(list[i].name ,name)) {
            return i;
        }
    }

    return -1;
}
