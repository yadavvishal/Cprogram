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
			trav->next=next;

		}
		trav->next=newnode;
	}
	return head;
}	
int main()
{
	int n,i;
	printf("Enter the numbers of input:");
	scanf("%d",&n);
	printf("The numbers are:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data);
		head=push(head,data);
	}

