#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *insert(struct node *head,int data)
{
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=NULL;
    if(head==NULL)
    {
        head=newnode;
    }
    else
    {
        struct node *trav=head;
        while(trav->next!=NULL)
        {
            trav=trav->next;
        }
        trav->next=newnode;

    }
    return head;
}
int display(struct node *head)
{
    struct node *trav1=head;
    struct node *trav2=head;
    if(head!=NULL)
    {
        while(trav1!=NULL && trav1->next!=NULL)
        {
             trav2=trav2->next;
             trav1=trav1->next->next;
        }
        printf("Middle element is:%d",trav2->data);
    
    }
    
}
int main()
{
    int i,n,data;
    scanf("%d",&n);
    struct node *head=NULL;
    for(i=0;i<n;i++)
    {
        scanf("%d",&data);
        head=insert(head,data);
    }
    display(head);
    

}