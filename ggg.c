#include<stdio.h>
int main()
{
	int a,b,x,y,n;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("enter the value of x:");
	scanf("%d",&x);
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	
	if(n==1)
		{	
			y=(a*x%b);
			printf("value of y=%d",y);
		}	
	else if(n==2)
		{
			y=(a*x*2+b*2);
			printf("value of y=%d",y);
		}
	else if(n==3)
		{
			y=(a-b*x);
			printf("value of y=%d",y);
		}
	else if(n==4)
		{
			y=(a+x/b);
			printf("value of y=%d",y);
		}
	else
		{
			printf("invalid input");
		}
    return 0;
}

