#include<stdio.h>
#define size 4
int arr[size];
int front=-1;
int rear=-1;
void enqueue(int a)
{
	//if(rear==size-1)
//	{
//		printf("full\n");
//	}
//	else
//	{
	 if(front==-1)
	{
		front++;
		rear++;
		arr[rear]=a;
		printf("no. is %d\n",arr[rear]);
	
    }
  //  }
}
void dequeue()
{
	int a;
	if(front==rear+1)
	{
		printf("empty");
	}
	else
	{
		a=arr[front];
		front++;
		if(front==rear+1)
		{
			front=-1;
			rear=-1;
		}
		printf("no. is delete %d\n",a);
	
	}
}
void main()
{
	
	enqueue(100);
	enqueue(10);
	enqueue(1);
	enqueue(132);
	dequeue();
	dequeue();
	enqueue(5);
	enqueue(6);
	enqueue(9);
	
}

