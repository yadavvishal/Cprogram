#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node *mergesortedlist(struct node *head1,struct node *head2)
{
	struct node *p1=head1;
	struct node *p2=head2;
	struct node *dummynode=malloc(sizeof(struct node));
	struct node *p3=dummynode;
	while(p1!=NULL && p2 !=NULL)
	{
		if(p1->data<p2->data)
		{
			p3->next=p1;
			p1=p1->next;
		}
		else
		{
			p3->next=p2;
			p2=p2->next;
		}
		p3=p3->next;
	}
	while(p1!=NULL)
	{
			p3->next=p1;
			p1=p1->next;
			p3=p3->next;
	}
	while(p2!=NULL)
	{
			p3->next=p2;
			p2=p2->next;
			p3=p3->next;
	}
	return dummynode->next;
}
int display()
{
	struct node *head;
	struct node *trav=head;
	
	while(trav!=NULL)
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
	struct node *head1,*newnode;
	head1=NULL;
	
	for(i=0;i<n1;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Numbers are:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		head1=newnode;
	}
	
	printf("Enter the number of inputs of 2 linkedlist:");
	scanf("%d",&n2);              
	struct node *head2,*Newnode;
	head2=NULL;
	
	for(i=0;i<n2;i++)
	{
		Newnode=(struct node*)malloc(sizeof(struct node));
		printf("Numbers are:");
		scanf("%d",&Newnode->data);
		Newnode->next=NULL;
		head2=Newnode;
	}
	struct node*head=mergesortedlist(head1,head2);
	display(head);
}
