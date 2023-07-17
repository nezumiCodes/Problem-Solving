#include <stdio.h>

int main(void) {
  printf("Hello World\nHi!");
  printf("My name is Celia\n");

  int a = 7;
  printf("%d\n", a);

  float b = 6.7;
  printf("%f\n", b);

  double c = 597.245;
  printf("%f\n", c);

  char mychar = 'fghd';
  printf("%c\n", mychar);

  int age = 25;
  int currentYear = 2023;
  printf("You are %d years old.\n", age);

  age = 26;
  printf("You are %d years old.\n", age);

  int birthYear = currentYear - age;
  printf("You are %d years old, and that means you were born in %d.\n", age, birthYear);

  int age2;

  printf("Please enter your age:\n");
  scanf("%d", &age2);
  printf("You are %d years old.\n", age2);

  return 0;
}