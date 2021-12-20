#include<stdio.h>
int swap(int *,int *);
int main()
{
	int a,b;
	printf("enter value of a and b:");
	scanf("%d%d",&a,&b);
	printf("before swap a=%d\nb=%d",a,b);
	swap(&a,&b);
	printf("\nafter swap a=%d\nb=%d",a,b);
	return 0;

}
	
int swap(int *p,int *q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
	
}
