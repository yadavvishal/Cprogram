#include<stdio.h>
int main()
{
	int t,i,j,k,n,a1[10],a2[10];
	printf("Enter the test:");
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int sum=0;
		int temp=0;
		int count=0;
		int b=0;		
		for(j=0;j<3;j++)
		{
			scanf("%d",&a1[j]);
			
		}
		b=b+a1[0];
		printf("\n");
		for(k=0;k<b;k++)
		{
			scanf("%d",&a2[k]);
		}
		for(k=0;k<b;k++)
		{	
			if(a2[k]==0)
			{
				count++;
			}
			if(a2[k]==1)
			{
				temp++;
			}
		}
		sum=sum+count*a1[1]+temp*a1[2];
		printf("%d\n",sum);
	}
	return 0;
}	
	
