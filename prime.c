#include<stdio.h>
void main()
{
     char s[3][10];
     int i;
     printf("enter the three string= ");
     for(i=0;i<=2;i++)
     gets(&s[i][0]);
	 //scanf("%s",s);
   //  for(i=0;s[i]!='\0';i++)
   //  printf("%c",s[i]);
   for(i=0;i<=2;i++)
   printf("%s\n",s[i]);
}
