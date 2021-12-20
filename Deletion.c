#include<stdio.h>
int main()
{
	int i,a[10],n,pos;
	printf("Enter the size of an array:");
	scanf("%d",&n);
	printf("Enter the elemnets of an array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the position where element to be delete:");
	scanf("%d",&pos);	
	for(i=pos-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	n--;
	printf("After deleting the elements:");	
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);	
	}
}
