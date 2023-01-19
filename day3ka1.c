#include<stdio.h>
void main()
{
	int i,n,m=1,sum=0,g;
	printf("enter the value= ");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		m=i*m;
		sum=sum+m;
	}
	g=sum+1;
	printf("%d",g);
}
