#include<stdio.h>
void perfect();
void main()
{
	perfect();
}
void perfect()
{
	int n,m,c,i,j,sum;
	printf("enter the range value= ");
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{ 
		for(j=1;j<i;j++)
		{
			if(i%j==0)
			sum=sum+j;
			
		}
		if(sum==i)
		printf("%d ",i);
		sum=0;
	}
}
