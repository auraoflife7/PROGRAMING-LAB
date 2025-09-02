#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number:");
	scanf("%d",&a);
	printf("(WITHOUT USING MODULAS OPERATOR)Last digit of your number is:%d\n",(a-(a/10)*10));
	printf("(USING MODULAS OPERATOR)Last digit of your number is:%d",(a%10));
	return 0;
}