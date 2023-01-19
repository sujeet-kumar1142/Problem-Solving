#include<stdio.h>
int TH(int,char,char,char);
void main()
{
	TH(3,'a','b','c');
}
int TH(int n,char a,char b,char c)
{
	if(n==0)
	return 1;
	TH(n-1,a,c,b);
	printf("%d ",n);
	TH(n-1,c,b,a);
}
