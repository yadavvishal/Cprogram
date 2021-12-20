#include<stdio.h>
void main()
{
	float i,j,x,f=1,s=1,sign=1,n;
	printf("\nenter value of n:");
	scanf("%f",&n);
	printf("\nenter the value of x:");
	scanf("%f",&x);
	
	for(i=1;i<=n;i++)
	{
		f=1;
		for(j=1;j<=i;j++)
		{
			f=f*j;
		}
		sign=sign*(-1);
		
		printf("%f\n",s);
		printf("%f\n",(x*i));
		printf("%f\n",f);
		s=s+(sign*(x*i)/f);
		printf("%f\n",s);

		printf("\n\n");
		
	}
	printf("sum of series=%f",s);
    
}
