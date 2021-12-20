#include<stdio.h>
#include<stdlib.h>
struct node *head=NULL;
struct node
{
	int data;
	struct node *next;
};
void addposition(int data)
{
	struct node *newnode=malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=head;
	head=newnode;
}
void position(int data,int position)
{
	
       struct node *newnode=malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=NULL;
        struct node *trav=head;
    
        int index=0;
        while(index<position-1)
        {
           trav=trav->next;
           index++;
        }    
        newnode->next=trav->next;
        trav->next=newnode;
        
}
void printlist()
{
	struct node *head;
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
	int i, n, pos, data;
    printf("Enter the number of nodes: \n");
    scanf("%d",&n);
    printf("Enter the data for the nodes: \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&data);
        addposition(data);
    }
    printf("Enter the data you want to insert in between the nodes: \n");
    scanf("%d",&data);
    printf("Enter the position at which you want to insert the nodes: \n");
    scanf("%d",&pos);
    if(pos>n)
    {
        printf("Enter a valid position: ");
    
    }
    else 
    {
        position(data,pos);
    	
    }
    printlist();
    return 0;
}
