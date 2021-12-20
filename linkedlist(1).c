#include<stdio.h>
#include<stdlib.h>
struct node
	{
		int data;
		struct node *next;
	};
void linkedlistTraversal(struct node *p)
{
	while(p != NULL)
	{
		printf("Elements are:%d\n",p->data);
		p=p->next;
	}
	
	
}
int main()
{
	struct node *head,*second,*third,*newnode;
	
	head=(struct node*)malloc(sizeof(struct node));
	second=(struct node*)malloc(sizeof(struct node));
	third=(struct node*)malloc(sizeof(struct node));
	newnode=(struct node*)malloc(sizeof(struct node));

	printf("enter data:\n");
	scanf("%d",&head->data);
	head->next=second;

	printf("enter data:\n");
	scanf("%d",&second->data);
	second->next=third;

	printf("enter data:\n");
	scanf("%d",&third->data);
	third->next=NULL;

	
	printf("insert data at begin:\n");
	scanf("%d",&newnode->data);
	newnode->next=head;
	head=newnode;
	linkedlistTraversal(head);
	return 0;
}
	
