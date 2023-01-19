#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,po;
    char set[20];
    printf("enter length of set-");
    scanf("%d",&n);
    printf("enter set elements-");
    scanf("%s",&set);
    po=pow(2,n);
    for(i=0;i<pow;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i & (1<<j))
                printf("%c",set[j]);
        }
        printf(" ");
    }
}
