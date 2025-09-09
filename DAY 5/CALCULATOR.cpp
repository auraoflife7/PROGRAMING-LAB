#include<stdio.h>
int main()
{
  char op;
  double first, second;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &first, &second);
  switch (op)
  {
    case '+':
      printf("%lf + %lf = %lf", first, second, first + second);
      break;
    case '-':
      printf("%lf - %lf = %lf", first, second, first - second);
      break;
    case '*':
      printf("%lf * %lf = %lf", first, second, first * second);
      break;
    case '/':
      printf("%lf / %lf = %lf", first, second, first / second);
      break;
  }

  return 0;
}