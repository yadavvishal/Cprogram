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
	struct node *node=malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return (node);
}
void printpostorder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
		printpostorder(root->left);
		printpostorder(root->right);
		printf("%d",root->data);
	}
}
	
int main()
{
	struct node *root=push(2);
	root->left=push(4);
	root->left->left=push(5);
	root->left->right=push(10);
	root->right=push(7);
	root->right->right=push(8);
	printf("Post order are:");
	printpostorder(root);
}
	


