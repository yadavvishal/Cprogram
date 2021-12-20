#include<stdio.h>
#include<stdlib.h>

struct node 
{
	int data;
	struct node *next;
};
int getnodevalue(struct node *head,int position)
{
	
	int i;
	i=0;
	struct node *trav=head;
	while(trav!=NULL)
	{
		if(i==position)
		{
			
			return trav->data;
		}
		i++;
		trav=trav->next;
	}

}

int main()
{
	struct node *head;
	int i,n,position,data;
	printf("Enter the number of input:");
	scanf("%d",&n);
	printf("Enter the numbers:");
	head=NULL;
	for(i=0;i<n;i++)
	{
		struct node *newnode=malloc(sizeof(struct node));
		scanf("%d",&newnode->data);
		newnode->next=head;
		head=newnode;
	}
	printf("Enter the position you want to data to find:");
	scanf("%d",&position);
	printf("Element at index is %d", getnodevalue(head,position));
  getchar();
}


