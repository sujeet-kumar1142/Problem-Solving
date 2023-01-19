#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *prev;
	struct node *next;
};
void display(struct node *head)
{
  while (head!=NULL)
  {
  	printf("%d\n",head->data);
  	head=head->next;
  }
}
void first(struct node **head)
{
	struct node *n0;
	n0=(struct node*) malloc(sizeof(struct node));
	
	
}
void main()
{
	struct node *n1,*n2,*n3,*n4;
	n1=(struct node*) malloc(sizeof(struct node));
    n2=(struct node*) malloc(sizeof(struct node));
	n3=(struct node*) malloc(sizeof(struct node));
	n4=(struct node*) malloc(sizeof(struct node));
	n1->data=40;
	n2->data=10;
	n3->data=80;
	n4->data=90;
	n1->prev=NULL;
	n1->next=n2;
	n2->prev=n1;
	n2->next=n3;
	n3->prev=n2;
	n3->next=n4;
	n4->prev=n3;
	n4->next=NULL;	
}

