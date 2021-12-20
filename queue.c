#include<stdio.h>
#define SIZE 5
void enQueue(int);
void deQueue();
void display();
int item[SIZE], rear=-1,front=-1;
int main()
{
	
	deQueue();
	
	enQueue(1);
	enQueue(2);
	enQueue(3);
	enQueue(4);
	enQueue(5);

	display();

	deQueue();

	display();
	return 0;
}
void enQueue(int value)
{
	if(rear==SIZE-1)
	{
		printf("queue is full:");
	}
	else
	{
		if(front==-1)
			front=0;
		rear++;
		item[rear]=value;
		printf("\n Inserted-> %d",value);
	}
}
void deQueue(int value)
{
	if(front==-1)
	{
		printf("queue is empty:");
	}
	else
	{
		printf("\n Deleted-> %d",value);
		front++;
		if(front>rear)
		{
			(front=rear=-1);
		}
	}
}
void display()
{
	if(rear==-1)
	{	
		printf("queue is empty:");
	}
	else
	{
		int i;
		printf("elements are:\n");
		for(i=front;i<=rear;i++)
		{
			printf("%d",item[i]);
		}
		printf("\n");
	}
}
