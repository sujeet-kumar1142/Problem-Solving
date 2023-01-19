#include<stdio.h>
void main()
{
	int i,j,row;
	printf("enter the number of rows= ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
		for(j=1;j<=2*row-1;j++)
		{
			if(j>=i && j<=2*row-i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
