#include <stdio.h>
int main()
{
  int a, b;
  printf("Enter First Number:\n");
  scanf("%d",&a);
  printf("Enter Second Number:\n");
  scanf("%d",&b);
  printf("First Number:%d\n",a);
  printf("Second Number:%d\n",b);
  a=a+b;
  b=a-b;
  a=a-b;
  printf(" After Swaping First Number:%d\n",a);
  printf("After Swaping Second Number:%d\n",b);
  return 0;
}