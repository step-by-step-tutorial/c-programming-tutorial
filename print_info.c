#include "stdio.h"


void print_info(char *name, int age, char *address, char *phone, char *email) {
  printf("Name: %s\n", name);
  printf("Age: %d\n", age);
  printf("Address: %s\n", address);
  printf("Phone: %s\n", phone);
  printf("Email: %s\n", email);
}

int main() {
  print_info("John Smit", 20, "Los Angels, California", "01712345678", "johnsmith@email.com");
  return 0;
}