#include<stdio.h>
int main()
{
	int i,j,n;
	for(i=3;i>=1;i--)
	{
		
		for(j=i;j>=1;j--)
			{
				printf("%d",j);
				
			}
		printf("\n");
		

	}
	printf("\n");
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=3;j++)
			{
				if(j>=3-(i-1) && j<=3+(i-1))
					{
						printf("* ");
					}
				else
					{
						printf(" ");
					}
			}
       printf("\n");
	}
}


