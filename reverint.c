#include<stdio.h>

int main()
{
	int n,i,r,sum=0;
	printf("\nEnter the number:");
	scanf("%d",&n);
	
	while(n>=0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	printf("\nTHE REVERSE given is %d",sum);
	return 0;
}
	
	
	
	

