#include<stdio.h>
int main()
{
	char name[100];
	int i;
	printf("enter the name:");
	scanf("%s",name);
	for(i=0;i<100;i++)
	{
		printf("%c\n",*name);
		name++;
	}
	
}
