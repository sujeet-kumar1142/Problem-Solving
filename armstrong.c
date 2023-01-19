#include<stdio.h>
void armhj(int,int);
void main()
{
   int n,m,s;
   printf("enter the range= ");
   scanf("%d%d",&n,&m);
   armhj(n,m);	
}
void armhj(int a,int b)
{ int h,arm,x,i,m,c,l;  
   for(i=a;i<=b;i++){
   	arm=0;c=0;
   	h=i;
   	l=i;
     while(i>0)
     {
     	i=i/10;
     	c++;
	 }
	 while(h>0)
	 {
	 	x=h%10;
	 	h=h/10;
	 	arm=arm+pow(x,c);
	 }
	 if(arm==l)
	 printf("%d ",arm);
}
	 
}
