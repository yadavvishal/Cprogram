#include<stdio.h>

void swap(int a,int b);

int main()
{
	int a,b,temp;
	printf("enter the value of a:");
	scanf("%d",&a);
	printf("enter the value of b:");
	scanf("%d",&b);
	printf("before swapping \na=%d\nb=%d",a,b);
	swap(a,b);
	printf("after swapping \na=%d\nb=%d",b,a);
	return 0;
}
void swap(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("\nvalue of a and b is %d %d\n",a,b);
}

