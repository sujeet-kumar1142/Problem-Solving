#include<stdio.h>
int mean();
int median();
void main()
{
	int a,b,c,d,e,s,p;
	s=mean();
	p=median();
	printf("mean and median is= %d ,%d ",s,p);
}
int mean()
{
	int a,b,c,d,e;
	printf("enter the value of a,b,c,d,e= ");
	scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
	return ((a+b+c+d+e)/5);
}
int median()
{
   	int a[5],i;
   	printf("enter the elements fo the array ");
	for(i=1;i<=5;i++)
	scanf("%d",&a[i]);
	return (a[3]);
}
