#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
struct node reverse(struct node **head)
{
	struct node*prev,*current,*next;
	prev=NULL;
	next=NULL;
	current=*head;
	
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	}
	*head=prev;
	
}
void push(struct node** head, int value)
{
    struct node* newnode
        = (struct node*)malloc(sizeof(struct node));
    newnode->data = value;
    newnode->next = (*head);
    (*head) = newnode;
}
 
void display(struct node *head)
{
	struct node*temp;
	
	temp=head;
	while(temp!=NULL)
	{
		printf("DATA=%d\n",temp->data);
		temp=temp->next;
	}
}

		
	
int main()
{
	struct node* head = NULL;
 
    push(&head, 20);
    push(&head, 4);
    push(&head, 15);
    push(&head, 85);
 
    printf("Given linked list\n");
    display(head);
    reverse(&head);
    printf("\nReversed Linked list \n");
    display(head);
    getchar();
}
