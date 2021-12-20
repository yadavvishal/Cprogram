#include<stdio.h>
int main()
{
	int i,j,n,a[50],temp;
	printf("enter the size of array:\n");
	scanf("%d",&n);
	printf("enter the elements of an array:");
	for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		}
	for(i=1;i<n;i++)
	{	
		temp=a[i];
		j=i-1;
	 while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j=j-1;
			a[j+1]=temp;
		}
	}
	printf("array in ascending order:\n");
	for(i=0;i<n;i++)
		{
			printf("%d\n",a[i]);
		}
}
