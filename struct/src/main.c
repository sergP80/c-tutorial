#include "app.h"

int main() {

  PERSON persons[] = {
    {1, 22, "Alex Brown"},
    {2, 25, "Lue Crew"},
    {3, 20, "Mari de Santos"},
    {4, 33, "Sally Binch"},
    {5, 27, "Michael Laushwitz"}
  };

  int size = sizeof(persons) / sizeof(persons[0]);

  print_array(persons, size);


  {
    printf("----------------------------\n");
    PPERSON result = find_by_max_age(persons, size);

    if (!result)
    {
      printf("Max age record not found\n");
    } else {
      printf("Max age record found\n");
      print(result);
    }

    printf("----------------------------\n");
  }

  {
    printf("Enter part of name:");

    char name[50] = "";

    scanf("%s", name);

    int result = find_first_by_name(persons, size, name);

    if (result == -1) {
      printf("Record not found by name part %sn", name);
    } else {
      printf("Record found by name part %s in position %d\n", name, result);

      print(&persons[result]);
    }
  }

  return 0;
}