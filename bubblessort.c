#include<stdio.h>
void main()
{
	int i,n,p,s,t;
	printf("enter the size of the array= ");
	scanf("%d",&n);
	printf("enter the elements of the array= ");
	int a[n];
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(p=0;p<n-1;p++)
	{
		for(s=0;s<n-p-1;s++)
		{
			if(a[s]>a[s+1])
			{
				t=a[s];
				a[s]=a[s+1];
				a[s+1]=t;
			}
		}
	}
	for(i=0;i<n;i++)
	printf("%d",a[i]);
}
