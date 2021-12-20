#include<stdio.h>
int sum_fibonacci(int n);
int a0=0,a1=1,result;
int main()
{
	int n,sum=0,i;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{

		sum=sum+sum_fibonacci(i);
	}
	printf("Sum of fibonacci series are:%d",sum);
	return 0;

}
int sum_fibonacci(int n)
{
	
	if(n==1)
		return 0;
	else
		if(n==2)
			return 1;
	else
	{
		
		result=a0+a1;
		
		a0=a1;
		a1=result;
		return result;
	}
	
	
}
