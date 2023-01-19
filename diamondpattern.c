#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=4;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j>=5-i && j<=3+i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	for(i=5;i<=7;i++)
	{
		for(j=1;j<=7;j++)
		{
			if(j>=i-3 && j<=11-i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}
