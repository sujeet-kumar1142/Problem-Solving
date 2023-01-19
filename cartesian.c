#include <stdio.h>
void main()
{
    int a[20],b[20],c[20],i,x,y,j,k;
    printf("Enter length of set 1\n");
    scanf("%d",&x);
    printf("Enter length of set 2\n");
    scanf("%d",&y);
    printf("Enter elements of set 1\n");
    for (i=0;i<x;i++)
        scanf("%d", &a[i]);
    printf("Enter elements of set 2\n");
    for (i=0;i<y;i++)
        scanf("%d",&b[i]);
    printf("cartessian product=");
    printf("{");
    for (i=0;i<x;i++)
    {
        for (j=0;j<y;j++)
        {
            printf("(%d,%d)",a[i],b[j]);
            printf(",");
        }
    }
    printf("}");
}
