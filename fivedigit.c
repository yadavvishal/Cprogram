#include<stdio.h>
int main()
{
	int num ,u,t,h,th,hh;
	printf("enter five digit number:");
	scanf("%d",&num);
	hh=num/10000;
	{
		printf("%d\n",hh);
	}
	th=(num/1000)%10;
	{
		printf("%d\n",th);
	}
	h=(num/100)%10;
	{
		printf("%d\n",h);
	}
	t=(num/10)%10;
	{
		printf("%d\n",t);
	}
	u=num%10;
	{
		printf("%d\n",u);
	}
}
