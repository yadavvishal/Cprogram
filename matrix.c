#include<stdio.h>
int main()
{
	int a[4][4],i,j;
	printf("enter elements:\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			scanf("%d",&a[i][j]);
		}	
	}
	printf("displaying elements of matrix :\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			{
				printf("%d",a[i][j]);
				if(j==2)
				{
					printf("\n");
				}					
			}
	}printf("diagonal elements are:\n");	
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
			{
				if(i==j)
				{	
					printf("%d\n",a[i][j]);
				}
			}
	}
return 0;
}
