#include <stdio.h>

int num, num2;
char ch;

int main()
{
  while (1)
  {
    printf ("if first number is e, end");
    printf("Enter a first number"):
    scanf_s("%c", &ch);
    num = ch -'0';
    printf("Enter a second number"):
    scanf_s("%d", &num2);
    if (ch == 'e') return 0;
    if (num > num2) printf("first number bigger than second number");
    else if (num < num2) printf("second number bigger than first number");
    else printf("first number and second number are same");
  }
}
