#include<stdio.h>

#define a 2
int main()
{
	int r;
	#define a 5
	r=a*2;
	printf("%d",r);
}

