#include "app.h"

double min_of(double arr[], int size) {
  double result = arr[0];

  for (int i = 1; i < size; i++) {
    if (arr[i] < result) {
      result = arr[i];
    }
  }
  return result;
}

double max_of(double arr[], int size) {
  double result = arr[0];

  for (int i = 1; i < size; i++) {
    if (arr[i] > result) {
      result = arr[i];
    }
  }
  return result;
}

int main() {

  double arr[] = {2.1, 4.2, -1.5, 5.3, -3.11, 3.75};

  int size = sizeof(arr) / sizeof(arr[0]);

  double max = max_of(arr, size);

  printf("max = %lf\n", max);

  return 0;
}