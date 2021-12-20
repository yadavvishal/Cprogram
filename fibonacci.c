#include<stdio.h>
int main()
{
	int a0=0,a1=1,n,result,i;
	result=a0+a1;
 	
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("Fibonacci Series: %d, %d, ", a0, a1);
	for(i=1;i<n;i++)
	{
		
		printf("%d,",result);
		a0=a1;
		a1=result;
		result=a0+a1;
	}
	
	return 0;	
}
