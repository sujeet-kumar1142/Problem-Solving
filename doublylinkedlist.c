#include<stdio.h>
struct node{
	int data;
	struct node *next;
	struct node *prev;
};
void insertfront(struct node**head,int data){
	struct node* newnord=new node;
	newnode->data=data;
	newnode->next=(*head);
	newnode->prev=null;
	if((*head)!= null)
	(*head)->prev=newnode;
	(*head)=newnode;
}
void main()
{
	insertfront();
}
