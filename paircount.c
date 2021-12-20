#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,j,a[100],n,count=0,b=0,p;
	printf("The number of socks represented:");
	scanf("%d",&n);
	printf("the colors are:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		
		for(j=i+1;j<n;j++)
		{
				if(a[i]==a[j])
				{
					for(p=j;p<n-1;p++)
					{
						count++;
						a[p]=a[p+1];
					
					}
				
					n--;
					j--;
					i++;
				}
		}		
	 b=b+count;
	}
	printf("%d",b);
}
