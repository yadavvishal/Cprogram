#include<stdio.h>
int main()
{int i,j,n1,n2,a[50][50],sum1=0,sum2=0,Sum;
	printf("enter the value of n1:");
	scanf("%d",&n1);
	printf("enter the elements of 1 matrix:");
	for(i=0;i<=n1;i++)
	{for(j=0;j<=n1;j++)
		{scanf("%d",&a[i][j]);
		}
	}for(i=0;i<=n1;i++)
	{for(j=0;j<=n1;j++)
		{if((i==j) || (i-j==n1)||  (j-i==n1))
			{printf(" the digonal element :%d\n",a[i][j]);
				sum1=sum1+a[i][j];
			}
		}
	}printf(" Sum of diognal elements of 1 matrix is:%d\n",sum1);
	printf("enter the value of n2:");
	scanf("%d",&n2);
	printf("enter the elements of 2 matrix:");
	for(i=0;i<=n2;i++)
	{for(j=0;j<=n2;j++)
		{scanf("%d",&a[i][j]);
		}
	}for(i=0;i<=n2;i++)
	{for(j=0;j<=n2;j++)
		{if((i==j) || (i-j==n2)||  (j-i==n2))
			{printf(" the digonal element :%d\n",a[i][j]);
				sum2=sum2+a[i][j];
			}
		}
	}printf(" Sum of diognal elements of 2 matrix is:%d\n",sum2);
	Sum=sum1+sum2;
	printf(" Sum of diognal elements of 1 and 2 matrix is:%d\n",Sum);
}
