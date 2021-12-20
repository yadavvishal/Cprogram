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
void printInordertree(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	else
	{
		printInordertree(root->left);
		printf("%d",root->data);
		printInordertree(root->right);
	}
}
int main()
{
	struct node *root=push(1);
	root->left=push(2);
	root->left->left=push(3);
	root->left->right=push(4);
	root->right=push(5);
	root->right->left=push(6);
	root->right->right=push(7);
	printf("Inorder tree traversal:");
	printInordertree(root);
}
