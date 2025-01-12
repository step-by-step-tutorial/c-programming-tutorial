#include <stdio.h>
#include "basic_calculater.h"

int add(int a, int b) {
  return a + b;
}

int sub(int a, int b) {
  return a - b;
}

int mul(int a, int b) {
  return a * b;
}

float div(int a, int b) {
  if (b == 0) {
    printf("Cannot divide by zero\n");
    return 0.0;
  }
  return (float) a / b;
}
