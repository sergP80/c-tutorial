#include "app.h"

int main() {

  help();

  double a, b, h;

  user_input(&a, &b, &h);

  tabulate(a, b, h);

  return 0;
}