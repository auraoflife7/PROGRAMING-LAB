#include <stdio.h>
int main()
{
  int a, b, c;
  printf("Enter First Number:\n");
  scanf("%d",&a);
  printf("Enter Second Number:\n");
  scanf("%d",&b);
  printf("First Number:%d\n",a);
  printf("Second Number:%d\n",b);
  c=a;
  a=b;
  b=c;
  printf(" After Swaping First Number:%d\n",a);
  printf("After Swaping Second Number:%d\n",b);
  return 0;
}