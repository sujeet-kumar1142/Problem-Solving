#include<stdio.h>
void main()
{
	int i,j,k;
	for(i=1;i<=7;i++)
	{
		k=7-i;
		for(j=1;j<=7;j++)
		{
			if(j<=8-i && j>=0){
			
			printf("%d ",k);
			k--;}
			
			else
			printf(" ");
		}
		printf("\n");
		
	}
}
