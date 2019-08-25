#include<stdio.h>
int main()
{
	int i,r,num;
	int fact;
	printf("\n	Enter the number:");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	{
	 fact=fact*i;	
	 	
	}
printf("\nThe factorial of %d is %d",num,fact);
	return 0;
}
