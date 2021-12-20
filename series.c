#include<stdio.h>
int main()
{
	int i,j,f=1,n,s=0;
	printf("enter value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
				{
					f=f*j;
				}
			s=s+f;
			f=1;
		}
	printf("sum of series=%d",s);
	return 0;
}

