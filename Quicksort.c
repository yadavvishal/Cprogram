#include<stdio.h>
void swap(int *a, int *b) {
  int t = *a;
  *a = *b;
  *b = t;
}
int partion(int a,int low,int high)
{
	int pivot=a[low];
	start=low;
	end=high;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			swap(a[start],a[end]);
		}
	}
	swap(a[low],a[high]);
	return end;
}
Quicksort(int a,int low,int high)
{
	if(low<high)
	{
		int temp=partion( a,low,high);

		Quicksort(a,low,temp-1);
		Quicksort(a,temp+1,high);
	}
}
int display(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\n");
}
int main()
{
	int pivot,a[100],i,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	Quicksort(a,0,n-1);
	display(a,n);
}

	


