#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=4;i++)
	{
		k='1';
		for(j=1;j<=7;j++)
		{
			if(j>=5-i && j<=3+i)
			{
				if(j==5)
			k=65;
			printf("%c",k);
			k++;
			
			}
			else
			printf(" ");
		}
		printf("\n");
	}
}
