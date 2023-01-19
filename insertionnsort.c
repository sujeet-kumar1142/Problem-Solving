#include<stdio.h>
void main()
{
	int i,j,n,temp;
	printf("enter the length of array= ");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of the array= ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
for(i=1;i<=n-1;i++)
{
	temp=a[i];
	j=i-1;
	while(j>=0&&a[j]>temp)
	{
		a[j+1]=a[j];
		a[j]=temp;
		j--;
	}
	a[j+1]=temp;
}
for(i=0;i<n;i++)
{
	printf("%d ",a[i]);
}
}
