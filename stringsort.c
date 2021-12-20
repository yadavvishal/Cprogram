#include<stdio.h>
int main()
{
	int i,n;
	char name[20];
	printf("enter the string:");
	scanf("%s",name);
	for(i=0;name[i]!='\0';i++)
	{
		printf("%c",name[i]);
		break;
	} 
}
