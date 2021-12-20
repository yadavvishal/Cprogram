#include<stdio.h>
#include<math.h>

int main()
{
	int  i,j,n,count=0,num;
	printf("Entre the till the number of prime want:");
	scanf("%d",&n);
	for(i=2;i<100;i++)
	{
		num=sqrt(i);
		for(j=2;j<=num;j++)
		{
			if(i%j!=0)
			{
				continue;	
				
			}
			
			
		}printf("%d\n",i);
		count ++;
		if(count==n)
			break;
		
	}	
	return 0;
}
