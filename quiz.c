#include<stdio.h>
long int ans(int n);
int main()
{
	int n;
	scanf("%d",&n);
	printf("ans 0f %d=%ld", n,ans(n));
	return 0;
}
long int ans(int n)
{
	if(n>1)
		return (n*ans-1);
	else
		return 1;
}
	
