#include<stdio.h>
int main()
{
	int data,i,n,a[100];
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter the elements of an array:");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	printf("enter the data to be search:");
	scanf("%d",&data);
	for(i=0;i<n;i++)
	{
		if(a[i]==data)
		{
			printf("data is an array at index:%d",i);
			break;
		}
		else
		{
			printf("data not present:");
			break;
		}
	}
	
}
