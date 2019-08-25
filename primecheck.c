#include<stdlib.h>
#include<stdio.h>

int primenum(int num)
{  int i;
	if(num<0)
	{
		printf("\nEnTER VALID NO.");
	}
	for(i=2;i<=num;i++)
	{
		if(num%2==0)
		{
			break;
		}
	}
	if(i>num)
	{
		printf("\nThe given no is prime no.");
	}
	else
	{
		printf("\nThe given no. is not prime no");
	}
}
int main()
{   int num;
	printf("\nEnter the no:");
	scanf("%d",&num);
	primenum(num);
}
