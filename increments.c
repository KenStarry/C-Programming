#include <stdio.h>

int main() {
  printf("Hello World \n");

  int a = 13;
  int b;
  b = a++;

  printf("\n");
  printf("PRE-INCREMENT \n");
  printf("a = %d \n", a);
  printf("b = %d \n", b);

  printf("\n");
  printf("POST-INCREMENT \n");
  int x = 15;
  int y = ++x;
  printf("x = %d \n", x);
  printf("y = %d \n", y);

  int age;
  printf("\n");
  printf("Enter Age \n");
  scanf("%d", &age);
  int total = ++age;

  printf("Your Age is Probably = %d", total);


  //We Use the Square Brackets to tell 'c' that we want to store multiple characters not just one.
  char firstName;
  printf("What's your name?\n");
  scanf("%s", &firstName);

  printf("Welcome %s", firstName);










  return 0;
}
