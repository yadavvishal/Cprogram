#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void addlast(struct node  **head,int data)
{
	
	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;

	if(*head==NULL)
		{
			newnode=*head;
			newnode->data=data;
			newnode->next=NULL;
		}
		else
		{
			struct node *trav=*head;
			while(trav->next!=NULL)
			{
			trav=trav->next;
			}
		
			trav->next=newnode;
			newnode->data=data;
			newnode->next=NULL;
		}
		
}
void printlist(struct node *head)
{
	struct node *temp;
	temp=head;
	while(temp !=NULL)
	{
		printf("Data=%d",temp->data);
		temp=temp->next;
	}
	printf("NULL\n");
}
int main()
{
	
	struct node *head=NULL;
	addlast(&head,10);
	addlast(&head,20);
	addlast(&head,30);
	
	
		
	printlist(head);
	return 0;
}
