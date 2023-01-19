#include<stdio.h>
void main()
{
	int i,j,k=0;
	for(i=1;i<=5;i++)
	{
		i<=3?k++:k--;
		for(j=1;j<=5;j++)
		{
			if(j>=6-k || (j==1&&i==5))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	k=1;
		for(i=5;i<=9;i++)
	{
		i<=7?k++:k--;
		for(j=1;j<=5;j++)
		{
			if(j<=k)
			printf("*");
			
			else
			printf(" ");
		}
		printf("\n");
	}
//	k=0;
//		for(i=1;i<=5;i++)
//	{
//		i<=3?k++:k--;
//		for(j=1;j<=5;j++)
//		{
//			if(j<=k)
//			printf("*");
//			
//			else
//			printf(" ");
//		}
//		printf("\n");
//	}

}
