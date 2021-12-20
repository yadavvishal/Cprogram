#include<stdio.h>
long int subarraysum(int arr[],int n)
{
	int i=0,j=0,k=0;
	long int result=0;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			for(k=i;k<=j;k++)
			{
				result+=arr[k];
			}
		}
	}
	return result;
}
	
int main()
{
	int n=3,arr[]={1,3,5};
	long int sum=subarraysum(arr,n);
	printf("Sum of all subarrays=%ld",sum);
	return 0;
}
