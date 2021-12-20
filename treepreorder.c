#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *push(int data)
{
	struct node *newnode =malloc(sizeof(struct node));
	newnode->data=data;
	newnode->left=NULL;
	newnode->right=NULL;
	return (newnode);
}
void printpreorder(struct node *newnode)
{
	if(newnode==NULL)
	{
		return ;
	}

	else
	{
		printf("%d",newnode ->data);
		printpreorder(newnode->left);
		printpreorder(newnode->right);	
	}
}
int main()
{
	struct node *root=push(1);
	root->left=push(2);
	root->right=push(4);

	root->left->left=push(6);
	root->right->left=push(7);
	root ->right->right=push(9);
	
	printf("Preorder traversal:");
	printpreorder(root);
}
