#include<stdio.h>
void main()
{
	int i,j,k=0,row;
	printf("enter the number of rows= ");
	scanf("%d",&row);
	for(i=1;i<=row;i++)
	{
	     if(row%2==0){
	        if(i<=row/2)
	        k++;
	        if(i>row/2+1)
	        k--;}
	     else   
	     i>(row+1)/2?k--:k++;
		for(j=1;j<=(row+1)/2;j++)
		{
			if(j<=k)
			printf("* ");
			else
			printf(" ");
		}
		printf("\n");
	}

}
