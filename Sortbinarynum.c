#include<stdio.h>
void sortbinaryarray(int a[],int n)
{
	int count =0;
	for(int i=0;i<n;i++)
	{
		if(a[i]==0)
			count++;
	}
	int k=0;
	while(count!=0)
	{
		a[k++]=0;
		count--;
	}
	while(k<n)
	{
		a[k++]=1;
		
	}
}
		
int main()
{	
	int i,n,a[10];
	printf("Enter the number of input:");
	scanf("%d",&n);
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sortbinaryarray(a,n);	
	printf("Sorted binary tree:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
