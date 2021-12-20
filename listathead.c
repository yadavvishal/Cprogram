#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
void addbegin(struct node **head,int data)
{
	struct node *newnode;
	newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=NULL;
	
	if(head==NULL)
    {
        newnode->data=data;
        newnode->next=NULL;
        *head=newnode;
    }
    else {
        newnode->data=data;
        newnode->next=*head; 
        *head=newnode;   
    }
    
    
}
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
int main()
{
	struct node *head;
	head=NULL;
	addbegin(&head,10);
	addbegin(&head,20);
	addbegin(&head,30);
	
	display(head);
	return 0;
}
	
