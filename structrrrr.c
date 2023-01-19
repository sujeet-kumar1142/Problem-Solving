#include<stdio.h>
struct student
{
	int roll;
	float marks;
};
void display(struct student s1)
{
	printf("%d %f",s1.roll,s1.marks);
}
void main()
{

	struct student s;
	int a,i;
	scanf("%d",&a);
	printf("enter the details of students= ");
	for(i=0;i<a;i++)
	scanf("%d %f\n",&s.roll,&s.marks);
	display(s);
	
}
