#include<stdio.h>
void main()
{
	int i,n,m,t,k,j,q;
	printf("enter the value of n=");
	scanf("%d",&n);
	int a[n];
	printf("enter the value of A= ");
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);	}
 	printf("enter the value of m= ");
	scanf("%d",&m);
	int b[m];
	printf("enter the values of B= ");
		for(i=0;i<m;i++)
	{	scanf("%d",&b[i]); }
    printf("for A-B PRESS (1) AND for B-A PRESS (2)");
    scanf("%d",&q);
    int c[n+m];
    
    //for calculating A-B
    if(q==1){
    for(i=0;i<n;i++)
    {
    	t=0;
    	for(j=0;j<m;j++)
    	{
    		if(a[i]==b[j])
    		t++;
		}
		if(t==0)
		{
			c[k]=a[i];
			k++;
		}
	}
	printf("the set difference A-B is=");
	for(i=0;i<k;i++)
	printf("\n%d",c[i]);
    }
    
    //for calculating B-A
	else
	{
	for(i=0;i<m;i++)
    {	t=0;
    	for(j=0;j<n;j++)
    	{
    		if(b[i]==a[j])
    		t++;
		}
		if(t==0)
		{
			c[k]=b[i];
			k++;
		}
	}
	printf("the set difference B-A is=");
	for(i=0;i<k;i++)
	printf("\n%d",c[i]);
    }
}

