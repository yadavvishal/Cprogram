#include<stdio.h>
#include<math.h>
long int fact(int n)
{  
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
int main()
{
   long int n,result;
   printf(" enter the value of n:");
   scanf("%ld",&n);
   result=fact(n);
   printf("result:%ld",result);
}


