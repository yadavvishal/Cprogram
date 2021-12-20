#include<stdio.h>
int main()
{
	int n,th,t,u,h,sum=0;
	printf("enter value of n:");
	scanf("%d",&n);
	u=n%10;
	t=(n/10)%10;
	h=(n/100)%10;
	th=(n/1000);
    sum=u*u*u+t*t*t+h*h*h+th*th*th;
	printf("Thousands = %d , Hundreds = %d , Tens = %d , Units = %d\n",th,h,t,u); 
	if(sum==n)
		printf("%d is armstrong number",n);
	else
		printf("%d is not armstong number",n);
	return 0;
}

