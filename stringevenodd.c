#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,n,num;

	char *str[]={"one","two","three","four","five","six","seven","eight","nine"};	
	printf("Enter the number of input:");
	scanf("%d",&num);
	printf("Enter the number to be print:");
	for(i=0;i<num;i++)
	{
		scanf("%d",&n);
		if(n<1)
		{
			return 1;
		}
		if(n>=1 && n<=9)
		{
			printf("%s\n",str[n-1]);
		}
	
		if(n>9 && n%2==0)
		{
			printf("\nEven");
		}
		if(n>9 && n%2!=0)
		{
			printf("\nOdd");
		}

	}
		
		
	return 0;
}
	
