#include<stdio.h>
void main()
{
	int i,j,k=0,x=11;
	for(i=1;i<=21;i++)
	{
		i<=11?k++:k--;
		for(j=1;j<=21;j++)
		{
			if(j>=12-k &&j<=10+k){
			printf("%d",x);
			j%2==0?x--:x++;}
			else
			printf(" ");
		}
		printf("\n");
	}
}
