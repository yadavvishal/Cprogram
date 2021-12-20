#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
int display(struct node *head)
{
	struct node *ptr=head;
	
	while(ptr!=NULL)
	{
		printf("%d->",ptr->data);
		ptr=ptr->next;	
	}
	printf("NULL\n");
		
	
}

struct node *Begin(struct node *head,int value)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=value;
	newnode->next=head;
	head=newnode;
}
	
int main()
{
	struct node *prevnode,*newnode,*head;
	int i,n;

	printf("Enter the numbers :");
	scanf("%d",&n);
	head=NULL;
	for(i=0;i<n;i++)
	{
		printf("\nInsert values :");
		newnode=(struct node*)malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		if(head==NULL)
		{
			newnode=head;
		}
		else
		{
			prevnode->next=newnode;
			prevnode=newnode;
		}
	}
	head=Begin(head,20);
	display(head);
	return 0;
}
	
	
