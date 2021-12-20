#include<stdio.h>
int main()
{int i,j,a[50][50],b[50][50],c[100][100],n1,n2,sum=0,k;
	printf("Enter the row and column of matrix1:");
	scanf("%d",&n1);
	printf("Enter the elements of 1 matrix:\n");
	for(i=0;i<n1;i++)
	{for(j=0;j<n1;j++)
			{scanf("%d",&a[i][j]);}
	}for(i=0;i<n1;i++)
	{for(j=0;j<n1;j++)
			{printf("%d\t",a[i][j]);
			}printf("\n");
	}printf("Enter the row and column of matrix2:");
	scanf("%d",&n2);
	printf("Enter the elements of 2 matrix:\n");
	for(i=0;i<n2;i++)
	{for(j=0;j<n2;j++)
			{scanf("%d",&b[i][j]);}
	}
	for(i=0;i<n2;i++)
	{for(j=0;j<n2;j++)
			{printf("%d\t",b[i][j]);
			}printf("\n");
	}for(i=0;(i<n1)||(i<n2);i++)
	{for(j=0;(j<n1)||(j<n2);j++)
		{	sum=0;
			for(k=0;(k<n1)||(k<n2);k++)
				{sum=sum+a[i][k]*b[k][j];
				}c[i][j]=sum;}
	}printf("Multiplication of two matrices are:\n");
	for(i=0;(i<n1)||(i<n2);i++)
	{for(j=0;(j<n1)||(j<n2);j++)
		{printf("%d\t",c[i][j]);
		}printf("\n");}
}	
