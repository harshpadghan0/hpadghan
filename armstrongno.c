#include<stdio.h>
int main()
{
	int r,n,temp;
	int sum=0;
	printf("\nEnter the number:");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+(r*r*r);
		n=n/10;
	}
	if(temp==sum)
	{
		printf("\nTHE no. is  armstrong no.");
	}
	else
	{
		 printf("\nThe number is not armstrong .");
	}
	
return 0;	
}
