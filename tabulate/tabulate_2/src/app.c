#include "app.h"

int main() {

  help();

  double a, b, hx;

  double c, d, hy;

  if (user_input(&a, &b, &hx, &c, &d, &hy)) {
    printf("Error in user input\n");

    return -1;
  }

  tabulate(a, b, hx, c, d, hy);

  return 0;
}