#include<stdio.h>
int odd( int num1, int num2)
{
	if(num1>num2)
		return 0;
	printf("%d",num1);
	return odd(num1+2,num2);
}
int main()
{
	int num1=1,num2=100;
	printf("all odd number between num1 and num2 are:");
	odd(num1,num2);
}

