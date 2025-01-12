#include <stdio.h>

int main() {
  printf("Enter your name:\n");
  char name[100];
  scanf("%s", name);

  printf("Enter your age:\n");
  int age;
  scanf("%d", &age);

  printf("Enter your address:\n");
  char address[100];
  scanf("%s", address);

  printf("Enter phone:\n");
  char phone[100];
  scanf("%s", phone);

  printf("Enter your email:\n");
  char email[100];
  scanf("%s", email);

  printf("\n");
  printf("Name: %s\n", name);
  printf("Age: %d\n", age);
  printf("Address: %s\n", address);
  printf("Phone: %s\n", phone);
  printf("Email: %s\n", email);


  return 0;
}
