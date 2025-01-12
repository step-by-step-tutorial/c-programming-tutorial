#include <stdio.h>
#include <assert.h>
#include "basic_calculater.h"


void test_add() {
  assert(add(1, 2) == 3);
  assert(add(-1, 2) == 1);
  assert(add(1, 0) == 1);
  assert(add(0, 0) == 0);
  assert(add(-1, -1) == -2);
}

void test_sub() {
  assert(sub(1, 2) == -1);
  assert(sub(-1, 2) == -3);
  assert(sub(1, 1) == 0);
  assert(sub(0, 0) == 0);
  assert(sub(-1, -1) == 0);
  assert(sub(2, 1) == 1);
}

void test_mul() {
  assert(mul(1, 2) == 2);
  assert(mul(-1, 2) == -2);
  assert(mul(1, 0) == 0);
  assert(mul(0, 0) == 0);
  assert(mul(-1, -1) == 1);
  assert(mul(3, 3) == 9);
}

void test_div() {
  assert(div(1, 2) == 0.5);
  assert(div(4, 2) == 2.0);
  assert(div(-4, 2) == -2.0);
  assert(div(-4, -2) == 2.0);
  assert(div(0, 1) == 0.0);
  assert(div(5, 2) == 2.5);
  assert(div(1, 0) == 0);
}

int main() {
  test_add();
  test_sub();
  test_mul();
  test_div();
  return 0;
}
