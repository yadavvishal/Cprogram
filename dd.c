#include<stdio.h>
int fibo(int n)
{
	if(n==1)
		return 0;
	else if(n==2)
		return 1;
	return fibo(n)+fibo(n-1);
}
int main()
{
	int n=5;
	int ans = fibo(n);
	printf("%d",ans);
	return 0;
}
	
