#include<stdio.h>
int main()
{int i,j,n1,n2,a[100][100],n,found=0;
	printf("enter the value of row and column:\n");
	scanf("%d%d",&n1,&n2);
	printf("enter the elements of matrix:\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	printf("The transpose of matrix are:\n");
	for(i=0;i<n2;i++)
	{
		for(j=0;j<n1;j++)
			{
				printf("%d\t",a[j][i]);
			}
		printf("\n");
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n1;j++)
			{		if(a[i][j]==a[j][i])
					found++;
					else
					break;
			}
	}if(found==(n1*n2))
	printf("Matrix is symmetric");
	else
	printf("not symmetric");

}

