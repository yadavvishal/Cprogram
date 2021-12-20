#include<stdio.h>
#include<stdlib.h>
struct node *head;
struct node
{
	int data;
	struct node *next;
};
struct node *mergesortedlist(struct node *head1,struct node *head2)
{
	struct node *p=head1;
	struct node *q=head2;
	struct node *temp;
	struct node *head=NULL;
	
	if(p==NULL)
		return q;
	if(q==NULL)
		return p;
	if(p && q)
	{
		if(p->data<q->data)
		{
			temp=p;
			p=p->next;
		}
		else
		{
			temp=q;
			q=q->next;
		}
	}
	while(p,q)
	{
		if(p->data>q->data)
		{
			temp->next=q;
			temp=q;
			q=temp->next;
		}
		else
		{
			temp->next=p;
			temp=p;
			p=temp->next;
		}
		if(p==NULL)
			temp->next=q;
		if(q==NULL)
			temp->next=p;
		return head;
	}
}
struct node *display(struct node *head)
{
	struct node *trav=head;
	
	while(trav)
		{
			printf("%d->",trav->data);
			trav =trav->next;
		}
	printf("NULL\n");
}	
int main()
{
	int n1,n2,i;
	printf("Enter the number of inputs of 1 linked list:");
	scanf("%d",&n1);
	struct node *head1,*newnode,*prevnode;
	head1=NULL;
	for(i=n1-1;i>=0;i--)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Numbers are:");
		scanf("%d",&newnode->data);
		newnode->next=head1;
		head1=newnode;
	}
	printf("Enter the number of inputs of 2 linkedlist:");
	scanf("%d",&n2);              
	struct node *head2,*Newnode,*Prevnode;
	head2=NULL;
	for(i=n2-1;i>=0;i--)
	{
		Newnode=(struct node*)malloc(sizeof(struct node));
		printf("Numbers are:");
		scanf("%d",&Newnode->data);
		Newnode->next=head2;
		head2=Newnode;
	}
	printf("First list are :");
	display(head1);
	printf("second list are:");
	display(head2);
	head=mergesortedlist(head1,head2);
	display(head);
}
