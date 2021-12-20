#include<stdio.h>
int main()
{
	int num,a[10],i,reminder,reverse_rem,r;
	printf("enter a decimal number:");
	scanf("%d",&num);
	
	while(num!=0)
		
		{
		
			reminder=num%2;
			
			num=num/2;
			printf("%d",reminder);

		}
}
