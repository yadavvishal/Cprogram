#include<stdio.h>

void swap(int a[],int i,int j)
{
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}

void rearrangearray(int a[],int n)
{
	for(int i=1;i<n;i+=2)
	{
		if(a[i-1]>a[i])
		{
			swap(a,i-1,i);
		}
		if(i+1<n && a[i+1]>a[i])
		{
			swap(a,i+1,i);
		}
	}
	
}
int main()
{
	int n,i,a[100];
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the elements of an array:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	rearrangearray(a,n);
	printf("Print the array:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}

	
