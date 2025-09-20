#include<stdio.h>
int main(){
	int i,n,sum=0;
	
	printf("Enter a positive:");
	scanf("%d",&n );
	for(i=1;i<=n;i++){
		printf("%d", i);
		printf("\n");
		sum= sum+i;
	}
	printf("Sum of first %d natural numbers is= %d", n,sum);
		return 0;
	}
	
	
	
	
	
	

