#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=6;i++)
	{
		int k=1;
		for(j=1;j<=6;j++)
		{
			if(j<=i){
			printf("%d",k);
			j%2==0?k++:k--;}    //or we can use K=1-K;
			else
			printf(" ");
		}
		printf("\n");
	}
}
