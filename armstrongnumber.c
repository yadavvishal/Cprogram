#include<stdio.h>
int main()
{
 	int i,u,t,h,sum=0;
	printf("Armstrong number between 100 to 500 are:\n");
	for(i=100;i<=500;i++)
	{
		u=i%10;
		t=(i/10)%10;
		h=(i/100);
		sum=(u*u*u+t*t*t+h*h*h);
		if(sum==i)
		{
			printf("%d\n",i);
		}		
		
	}
	return 0;
}
