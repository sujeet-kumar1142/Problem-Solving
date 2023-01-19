#include<stdio.h>
void main()
{
	int i,j,n,m,k=0;
	printf("enter the length of set 1(n)=");
	scanf("%d",&n);
	int a[n];
	printf("enter the values of set1= ");
	for(i=0;i<n;i++)
	{	scanf("%d",&a[i]);	}
	printf("enter the length of set 2(m)=");
	scanf("%d",&m);
	int b[m];
	printf("enter the values of set 2= ");
	for(i=0;i<m;i++)
	{	scanf("%d",&b[i]);	}
	
    //Merging the set
    int f[n+m];
    for(i=0;i<n+m;i++){
		if(i<n){
			f[i]=a[i];
		}
		else{
			f[i]=b[i-n];
		}
	}
	
	//Getting Union
	int c[m+n];
	for(i=0;i<n+m;i++)
	{	int t=0;
		for(j=0;j<k;j++)
		{	if(c[j]==f[i])
			t=1;		}
		if(t==0)
		{	c[k]=f[i];
			k++;	}
    }
    
    //Output Result
    printf("union of both the set is= ");
    for(i=0;i<k;i++)
	{
		printf("%d ",c[i]);
	}
}
