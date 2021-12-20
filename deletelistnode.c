#include<stdio.h>
#include<stdlib.h>
struct node *head=NULL;
struct node
{
	int data;
	struct node *next;
};
void linkedlist(int data)
{
	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	head=newnode;
}
struct node *deletenode(struct node *head,int position)
{
	
	struct node *temp=NULL;
	struct node *trav=head;
	
	if(position==0)
	{
		temp=head;
		head=trav->next;
		free(temp);
		return head;
	}
	for(int i=0;i< position-1;i++)
	{
		trav=trav->next;
	}
	temp=trav->next;
	trav->next=trav->next->next;
	free(temp);
	return head;
}
void display(struct node *head)
{
	struct node *trav=head;
	if(head==NULL)
	{
		printf("Linked list is empty:");
	}
	else
	{
		while(trav->next!=NULL)
		{
			printf("%d",trav->data);
			trav=trav->next;
		}
	
	}	
	printf("NULL\n");
}
int main()
{
	int i,n,position,data;
	printf("Enter the number of data :");
	scanf("%d",&n);
	printf("Enter the data:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		linkedlist(data);
	}
	
	printf("Enter the  position that data can be deleted:");
	scanf("%d",&position);
	
	deletenode(head,position);
	
	
	display(head);
}
	
