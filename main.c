#include <stdio.h>

imt num, num2;

int main()
{
  printf("Enter a first number"):
  scanf_s("%d", &num);
  printf("Enter a second number"):
  scanf_s("%d", &num2);
  if (num > num2) printf("first number bigger than second number");
  else if (num < num2) printf("second number bigger than first number");
  else printf("first number and second number are same")
  return 0;
}
