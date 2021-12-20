#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *push(struct node *head,int data)
{
	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		struct node *trav=head;
		while(trav->next!=NULL)
		{	
			
			trav=trav->next;
		}
		trav->next=newnode;
		
	}
	return head;
}
void display(struct node *head)
{
	struct node *start=head;
	while(start)
	{
		printf("%d ",start->data);
		start=start->next;
	}
}		
int main()
{
	int n,i,data;
	printf("Number of input numbers");
	scanf("%d",&n);
	struct node *head=NULL;
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		head=push(head,data);
	}
	display(head);
}
