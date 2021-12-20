#include<stdio.h>
int main()
{
	int i,j,lower=1,upper=300,c=0;
	printf("Prime numbers between 1 to 300 are:\n");
	for(i=lower;i<=upper;i++)
		{
			for(j=1;j<=i;j++)
				{
					if(i%j==0)
					c++;
				}
				if(c==2)
				{
					printf(" %d",i);
				}
				c=0;
		}
		
	return 0;
}
	
