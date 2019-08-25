#include<stdio.h>
int main()
{
	int n,r,num;
	int sum=0;
	printf("\nEnter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("The sum of %d is %d",n,sum);
	return 0;
}
