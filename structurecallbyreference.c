#include <stdio.h>
struct student {
   char name[10];
   int roll;
};
void display(struct student s) 
{
   printf("\nDisplaying information\n");
   printf("Name: %s", s.name);
   printf("\nroll: %d", s.roll);
}
void main() 
{
   struct student s1;
   printf("Enter name: ");
   scanf("%[^\n]%*c", s1.name);
   printf("Enter roll: ");
   scanf("%d", &s1.roll);
   display(s1);
}

