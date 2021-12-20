#include<stdio.h>
int main()
{
	int i,j,a[3][3],b[3][3];
	printf("enter the elements of first array:");
	for(i=1;i<=3;i++)
	{
			for(j=1;j<=3;j++)	
			{
				scanf("%d",&a[i][j]);
			}	
	}
	for(i=1;i<=3;i++)
	{
			for(j=1;j<=3;j++)	
			{
				printf("%d\t",a[i][j]);
			}
		printf("\n");
	}
	printf("reverse the array :");
	for(i=1;i<=3;i++)
	{
			for(j=1;j<=3;j++)	
			{
				b[i][j]=a[j][i];
	    }
		printf("\n");
	}
	for(i=1;i<=3;i++)
	{
			for(j=1;j<=3;j++)	
			{
				printf("%d\t",b[i][j]);
	    }
		printf("\n");
	}
	return 0;
}	

 
