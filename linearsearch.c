#include<stdio.h>
void main()
{
	int i,pos=-1,n,m,c=0;
	printf("enter the size of the array= ");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of the array= ");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("enter the element to be searched= ");
	scanf("%d",&m);
	for(i=0;i<n;i++)
	{
		if(m==a[i])
		pos=i+1;
		//c++;
	}
//	if(c==0)
    if(pos==-1)
	printf("element not found");
	else
	printf("element found at %d position\n and index is %d",pos,pos-1);
}
