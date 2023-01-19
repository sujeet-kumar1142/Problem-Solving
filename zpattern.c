#include<stdio.h>
void main()
{
	int i,j,n;
	printf("enter the value n= ");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			{
			if(i==0 || i==n-1)
			printf("*");
			else if(j<n-i-1)
			printf(" ");
			else if(j==n-i-1)
			printf("*");}
		}printf("\n");
	}
}
