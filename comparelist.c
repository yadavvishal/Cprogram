#include<stdio.h>
#include<stdlib.h>
struct node *head,*head1,*head2;
int value;
struct node
{
	int data;
	struct node *next;
};
int compare_list(struct node *head1,struct node *head2)
{
	while(head1!=NULL && head2!=NULL)
	{
		if(head1->data!=head2->data)
				return 0;
		head1=head1->next;
		head2=head2->next;
	}
	if(head1!=NULL)
	{
		return 0;
	}
	if(head2!=NULL)
	{
		return 0;
	}
	return 1;
}

int main()
{
	int n1,n2,i;
	printf("Enter the number of inputs of 1 linked list:");
	scanf("%d",&n1);
	struct node *head1,*newnode,*prevnode;
	head1=NULL;
	newnode=(struct node*)malloc(sizeof(struct node));
	for(i=0;i<n1;i++)
	{
		printf("Numbers are:");
		scanf("%d",&newnode->data);
		newnode->next=NULL;
		head1=newnode;
	}
	printf("Enter the number of inputs of 2 linkedlist:");
	scanf("%d",&n2);              
	struct node *head2,*Newnode,*Prevnode;
	head2=NULL;
	Newnode=(struct node*)malloc(sizeof(struct node));
	for(i=0;i<n2;i++)
	{
		printf("Numbers are:");
		scanf("%d",&Newnode->data);
		Newnode->next=NULL;
		head2=Newnode;
	}
	compare_list(head1,head2)?
	printf("Both list are identical:"):
	printf("Both list are non identical:");
	return 0;
}

		
