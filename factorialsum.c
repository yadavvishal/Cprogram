#include<stdio.h>
#include<math.h>
long int sum_fact(int n)
{  
	int i,f=1,s=0;
	for(i=1;i<=n;i++)
	{
		f=f*i;
		s=s+f;
	}
	
	return s;
}
int main()
{
   long int n,result,sum=0;
   printf("enter the value of n:\n");
   scanf("%ld",&n);
  
   printf("sum of factorial series are:%ld\n",sum_fact(n));
}
