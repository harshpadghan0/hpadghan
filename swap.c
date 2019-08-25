#include<stdio.h>
int main()
{    int a,b;
	printf("\nEnter the value of A:");
	scanf("%d",&a);
	printf("\nEnter the value of B:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("\nThe value after swap of A is:%d",a);
	printf("\nThe value after swap of B is:%d",b);
	
	
}
