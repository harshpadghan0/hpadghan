#include<stdio.h>

int main()
{   int n,i,sum=0;
  int r;
  int temp;
	printf("\nEnter the no:");
	scanf("%d",&n);
	temp=n;
	
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
		
	}
	if(sum==temp)
	{
		printf("\nTHE number is palindrome.::::");
	}
	else
	{
		printf("\nThe number is not a palindrome:::::");
	}
	return 0;
}
