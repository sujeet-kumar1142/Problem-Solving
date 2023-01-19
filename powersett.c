#include <stdio.h>
#include <math.h>
void PowerSet(char *set,int size)
{
    int p=pow(2,size);
    int c,j;
    for(c=0;c<p;c++)
    {
      for(j=0;j<size;j++)
       {
          if(c & (1<<j))
            printf("%c",set[j]);
       }
       printf("\n");
    }
}
int main()
{
	int n;
	printf("enter the size of string= ");
	scanf("%d",&n);
	char set[n];
	printf("enter the elements of the string= ");
	scanf("%s",&set);
    PowerSet(set,3);
    getchar();
}
