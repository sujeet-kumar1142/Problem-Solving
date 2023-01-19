#include<stdio.h>
void main()
{
	int i,n,m,mid;
	int a[9]={1,22,33,44,55,66,77,88,99};
	printf("enter the element to be searched= ");
	scanf("%d",&m);
	int l=0,u=9-1;
	while(l<=u)
	{
		mid=(l+u)/2;
		if(m==a[mid])
		{
			printf("searched successful at index %d,item found",mid);
			break;
		}
		else if(m>a[mid])
		l=m+1;
		else
		l=m-1;
	}
}
	
