#include<stdio.h>
void palindrome();
void main()
{   
    int s;
    palindrome();
}
void palindrome()
{
	int n,rev=0,a,m;
	printf("enter the number= ");
   	scanf("%d",&n);
   	m=n;
   	while(n>0)
   	{
   		a=n%10;
   		n=n/10;
   		rev=rev*10+a;
	}
	if(rev==m)
	printf("palindrome");
	else
	printf("not palindrome there is no digit which repeate itself");
}

