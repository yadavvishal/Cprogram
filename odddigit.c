#include<stdio.h>
int sum_odddigit(int num);
int main()
{
	 int num;
	printf("enter the positive number:");
	scanf("%d",&num);
  
	printf("Sum of odddigit is:%d\n",sum_odddigit(num));
	return 0;
} 
int sum_odddigit(int num )
{
	 int rem,Sum=0;
	while(num!=0)
	{
		rem=num%10;
		if(rem%2!=0)
			{
				Sum=Sum+rem;
			}
		num=num/10;
	}
	return  Sum;

}
