#include<stdio.h>
void main()
{
	int i,j,k=0;
	for(i=1;i<=9;i++)
	{
		i<=5?k++:k--;
		for(j=1;j<=9;j++)
		{
	        if(i>=2 || i<=8){
			
			if(j>=7-k && j<=3+k)
			printf(" ");
			else
			printf("*");}
			else
			printf("*");
		    
		}
		printf("\n");
	}
}
