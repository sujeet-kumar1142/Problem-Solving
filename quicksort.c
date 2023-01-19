#include<stdio.h>
void main()
{
	int i,j,left,right,p,n;
	printf("enter the value of n= ");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(i=0;i<n;i++)
	{
		p=a[0];
		for(j=i+1;j<=n;j++)
		{
			if(p>=a[j])
			{
				left=a[j];
			}
			else
			{
				right=a[j];
			}
		}
	}
}
