#include<stdio.h>
int main()
{
	int n,i,j,a[100],k;
	printf("Enter the number of input:");
	scanf("%d",&n);
	printf("Enter the numbers are:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			int sum=0;
		
			for(k=i;k<=j;k++)
			{
				sum=sum+a[k];
			}
			if(sum==0)
			{
				printf("{");
				for(k=i;k<=j;k++)
				{
					printf("%d ",a[k]);
				}
				printf("}\n");
			
			}
						
		}
	}
}
	
