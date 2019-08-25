#include<stdio.h>

int main()
{
	int i,j;
	int a[10][10],b[10][10],mul[10][10];
	int r,c,k;
	printf("\nEnter the value of Row:");
	scanf("%d",&r);
	printf("\nEnter the value of Colomn:");
	scanf("%d",&c);
	
	printf("\nThe value of 1st matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	printf("\nThe value of 2nd Matrix:");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&b[i][j]);
		}
	}
	
	printf("\nThe multipliation of the matrix is:\n");
	
	for(i=0;i<r;i++)
	{
	 for(j=0;j<c;j++)
	{
		mul[i][j]=0;
	 for(k=0;k<c;k++)
	 {
	 	mul[i][j]+=a[i][j]*b[i][j];
		 }	
	}
	}
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
	
	
	return 0;
	
	
	
}
