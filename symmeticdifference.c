#include<stdio.h>
void main()
{
  int a[10],m,n,b[10],i=0,j=0,k=0,l=0,c[10],t;
   printf("Enter length of both array-");
  scanf("%d%d",&m,&n);
  printf("Enter elements if 1st array-");
  for(i=0;i<m;i++)
  scanf("%d",&a[i]);
  printf("Enter elements if 2nd array-");
  for(i=0;i<n;i++)
   scanf("%d",&b[i]);
   
  for(i=0;i<m;i++)
 { 
    t=0;
   for(j=0;j<n;j++)
   {
     if(a[i]==b[j])
     t++;
   }
   if(t==0)
   {
     c[k]=a[i];
     k++;}
}
  for(i=0;i<n;i++)
{ 
    t=0;
    for(j=0;j<m;j++)
     {
       if(b[i]==a[j])
       t++;
     }
    if(t==0)
    {
      c[k]=b[i];
      k++;}
}
  for(i=0;i<k;i++)
  printf("%d ",c[i]);
 }
