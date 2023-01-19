#include<stdio.h>
void main()
{
	int n,i,s=0,max,ele,e,f[20],j,v=-1;
	printf("enter the value of n= ");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of the array= ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int c=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				f[j]=v;
				c=c+1;
			}
			
		}
		if(f[i]!=v)
			f[i]=c;
	}
	for(i=0;i<n;i++)
	{if(f[i] !=v)
		printf("%d  %d\n",a[i],f[i]);
	}
	
	
}
