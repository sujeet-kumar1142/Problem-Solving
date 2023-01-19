#include<stdio.h>
void main()
{
	int i,n,sum=0,x,m=1;
	float g;
	printf("enter the valueof x and n= ");
	scanf("%d%d",&n,&x);
	for(i=1;i<=n;i++)
	{
		m=m*i;
		sum=sum+(pow(x,i)/m);
	}
	g=sum+1;
	printf("%f",g);
}
