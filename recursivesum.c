#include<stdio.h>
int rsum(int num);
int main()
{
	int sum,num;
	printf("enter the five digit number:\n");
	scanf("%d",&num);
	sum=rsum(num);
	printf("Sum of five digit number are:%d",sum);
	return 0;
}
int rsum(int num)
{
	int  s,reminder;
	if(num!=0)
	{
		reminder=num%10;
		s=reminder+rsum(num/10);
	}
	else
		return 0;
	return s;
}	
