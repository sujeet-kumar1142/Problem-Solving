#include<stdio.h>
void main()
{
	int i,j,a,b,c,d;
	printf("enter the value of a,b,c,d =");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	add(a,b,c,d);
}
int add(int a,int b,int c,int d)
{
	int i;
	i=a+b+c+d;
	printf("%d",i);
	return i;
}
