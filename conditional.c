#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n%2!=0)
		printf("weird");
	else if((n%2==0)&&(n>2)&&(n<20))
		printf("not weird");
	else if((n%2==0)&&(n>6)&&(n<20))
		printf("weird");
	else if((n%2==0)&&(n>20))
		printf(" not weird");
	return 0;
}
