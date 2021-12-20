#include<stdio.h>

void merge(int arr[],int low,int mid,int high)
{
	int n1=mid-low+1;
	int n2=high-mid;
	int a1[n1];
	int a2[n2];
	
	for(int i=0;i<n1;i++)
	{
		a1[i]=arr[low+i];
	}	
	for(int i=0;i<n2;i++)
	{
		a2[i]=arr[mid+1+i];
	}
	int i=0;
	int j=0;
	int k=low;
	while(i<n1 && j<n2)
	{
		if(a1[i]<a2[j])
		{
			arr[k]=a1[i];
			i++;
			k++;
		}
		else
		{
			arr[k]=a2[j];
			j++;
			k++;
		}
	}
	while(i<n1)
	{
		arr[k]=a1[i];
			i++;
			k++;
	}
	while(j<n2)
	{
		
			arr[k]=a2[j];
			j++;
			k++;	
	}
	
}
void mergesort(int arr[],int low,int high)
{
	if(low<high)
	{
		int mid=(low+high)/2;
		mergesort(arr,low,mid);
		mergesort(arr,mid+1,high);
		merge(arr,low,mid,high);
	}
}

int main()	
	
{
	int i,n,arr[100];
	int low,high;
	printf("Enter the number of elemnets:");
	scanf("%d",&n);
	printf("Enter the numbers are:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	low=0;	
	high=n-1;	
	mergesort(arr,low,high);
	printf("After sorting array is:");
	for(i=0;i<n;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
