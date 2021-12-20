#include<stdio.h>
int main()
{
	int a[100],j,i,n,target;
	printf("Enter the length of array:");
	scanf("%d",&n);
	printf("Enter the target:");
	scanf("%d",&target);
	printf("Enter the lengths:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]+a[j]==target)
			{

				printf("%d and %d",a[i],a[j]);
			}
		}
		printf("\n");
	}
	return 0;
}
