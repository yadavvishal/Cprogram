#include<stdio.h>
#include<stdlib.h>
int main()
{
	
	int num ,u,t,h,th,hh,sum;
	printf("enter five digit number:");
	
	scanf("%d",&num);
	hh=num/10000;
	{
		sum=sum+hh;
	}
	th=(num/1000)%10;
	{
		sum=sum+th;
	}
	h=(num/100)%10;
	{
		sum=sum+h;
	}
	t=(num/10)%10;
	{
		sum=sum+t;
	}
	u=num%10;
	{
		sum=sum+u;
	}
	printf("%d",sum);
}
