#include<stdio.h>
#include<stdlib.h>
struct node 
{
	int data;
	struct node *next;
};
struct node *tail=NULL;
void insertatbegin()
{
	int data;
	struct node *newnode=malloc(sizeof(struct node));
	printf("Entre data to be inserted:");
	scanf("%d",&newnode->data);
	if(tail==NULL)
	{
		newnode->next=newnode;
		tail=newnode;
	}
	else
	{
		newnode->next=tail->next;
		tail->next=newnode;
	}
}
void display()
{
	if(tail==NULL)
	{
		printf("List is empty:");	
	}
	else
	{
		struct node *trav;
		trav=tail->next;
		do
		{
			printf("%d ",trav->data);
			trav=trav->next;	
		}
		while(trav!=tail->next);
		
	}
	
}
int main()
{

	int i,n;
	printf("Entre the number of input:");
	scanf("%d",&n);	
	
	for(i=0;i<n;i++)
	{
	
		insertatbegin();
	}
	display();
	return 0;
	
}
	
