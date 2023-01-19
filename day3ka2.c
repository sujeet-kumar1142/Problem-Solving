#include<stdio.h>
void main()
{
	int i,n,m=1,sum=0,g;
	printf("enter the value= ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		m=(i*m);
		g=m/i;
		sum=sum+g;
	}
	printf("%d",sum);
}
