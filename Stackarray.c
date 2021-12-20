#include<stdio.h>
int choice, stack[100],n,top,x,i;
void push();
void pop();
void display();
int main()
{
	
	printf("Enter the size of stack:");
	scanf("%d",&n);
	top=-1;
	printf("Stack operations using array:\n");
	printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.DISPLAY\n\t 4.EXIT");
	do
	{
		printf("Enter the choice:\n");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
			{
				push();
				break;
			}
			case 2:
			{
				pop();
				break;
			}
			case 3:
			{
				display();
				break;
			}
			case 4:
			{
				printf("Exit point:");
				break;
			}

			
		}
	}
	while(choice!=4);
	return 0;
}
void push()
{
	if(top>=n-1)
	{
		printf("Stack is full:");
	}
	else
	{
		printf("Enter the data:");
		scanf("%d",&x);
		top++;
		stack[top]=x;
	}
}
void pop()
{
	if(top==-1)
	{
		printf("Stack is empty:");
	}
	else
	{
		printf("The pop element is:=%d",stack[top]);
		top--;
	}
}
void display()
{
	if(top>=0)
	{
		printf("Stack elements are:\n");
		for(i=0;i<n;i++)
		{
			printf("%d",stack[i]);
		}
		printf("Enter the next choice:");
	}
	else
	{
		printf("Stack is empty:");
	}
}			
