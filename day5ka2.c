#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,h;
	printf("enter the value of a and b= ");
	scanf("%d%d",&a,&b);
	c=pow(a,b);
	h=c%10;
	printf("%d",h);
}
