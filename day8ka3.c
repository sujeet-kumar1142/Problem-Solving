#include<stdio.h>
void main()
{
	int a,n,s=0,c=0;
	printf("enter the non negitive integer= ");
	scanf("%d",&a);
	while(a>0)
	{
		n=a%10;
		a=a/10;
		c++;
    }
	if(c>1)
	{
	while(a>0)
	{
		n=a%10;
		a=a/10;
		s=s+n;
    }
	}
    else
	  printf("hello world");
	
printf("%d",s);
	
}
