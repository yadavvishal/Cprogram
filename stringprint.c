#include<stdio.h>
int main()
{
	int i,n,num;
	char *str[]={"one","two","three","four","five","six","seven","eight","nine"};
	
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
			printf("%s",str[n-1]);
		}
		else
		{
			printf("Greater the num:");
		}
	}
		
		
	return 0;
}
	


