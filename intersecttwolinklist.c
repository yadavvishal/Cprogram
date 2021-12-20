#include<stdio.h>
#include<stdlib.h>
struct node *head=NULL,*head1,*head2;

struct node
{
	int data;
	struct node *next;
};
struct node *mergetwolist(struct node *head1,struct node *head2)
{
	int position=0;
	struct node *trav=head1;
	
	while(trav->next!=NULL)
	{
		printf("%d->",trav->data);
		trav=trav->next;
		position++;
	}
	
	trav->next=head2;
	
	
}

	
struct node *display(struct node *head)
{
	
	
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
	struct node *head1,*newnode,*prevnode;
	head1=NULL;
	
	for(i=0;i<n1;i++)
	{
		newnode=(struct node*)malloc(sizeof(struct node));
		printf("Numbers are:");
		scanf("%d",&newnode->data);
		newnode->next=head1;
		head1=newnode;
	}
	display(head1);
	printf("Enter the number of inputs of 2 linkedlist:");
	scanf("%d",&n2);              
	struct node *head2,*Newnode,*Prevnode;
	head2=NULL;
	
	for(i=0;i<n2;i++)
	{
		Newnode=(struct node*)malloc(sizeof(struct node));
		printf("Numbers are:");
		scanf("%d",&Newnode->data);
		Newnode->next=head2;
		head2=Newnode;
	}
	display(head2);
	head=mergetwolist(head1,head2);
	display(head);
		
}
