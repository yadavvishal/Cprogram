#include<stdio.h>
int main()
{
	int i,j,n,m;
	printf("enter the value of number:");
	scanf("%d",&n);
	printf("Multiplication table of n is:\n");
	for(i=n;i<n+1;i++)
	{
		for(j=1;j<=10;j++)
			{ 
				
        m=i*j;
				printf(" \n\t\t%d*%d=%d\t",i,j,m);
			}
		
	}
	
}
