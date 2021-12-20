#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *prev;
	struct node *next;
};
void display(struct node *head)
{
	struct node *temp=head;
	while(temp!=NULL)
	{
		printf("%d ->",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
struct node *reversedisplay(struct node *head)
{
	struct node *current=head;
	struct node *nextnode;
	struct node *last=NULL;
	while(current!=NULL)
	{
		nextnode=current->next;
		current->next=current->prev;
		current->prev=nextnode;
		last=current;
		current=nextnode;
	}
	head=last;
	return head;
}
int main()
{
	int n,i,data;
	printf("Enter the number of input data:");
	scanf("%d",&n);
	struct node *head=NULL;
	printf("the number of doubly linked list are:\n");
	for(i=0;i<n;i++)
	
	{
		struct node *newnode=malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		newnode->next=head;
		newnode->prev=NULL;
		
		if(head==NULL)
		{
			head=newnode;
		}
		else
		{
			head->prev=newnode;
			newnode->next=head;
			head=newnode;
		}
	}
	
	reversedisplay(head);
	display(head);
	return 0;
}
		

