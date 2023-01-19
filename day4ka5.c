#include<stdio.h>
void prime();
void main()
{
	prime();
}
void prime()
{
	int n,m,c,i,j;
	printf("enter the range value= ");
	scanf("%d%d",&n,&m);
	for(i=n;i<=m;i++)
	{
		c=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
			c++;
		}
		if(c==2)
		printf("%d ",i);
	}
}
