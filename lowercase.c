#include<stdio.h>
#include<ctype.h>
int main()
{
	char c;
 	printf("enter a character:");
	scanf("%c",&c);
	if (islower(c)==0)
	printf("%c is not an lowercase alphabet",c);
	else
	printf("%c is an lowercase alphabet",c);
 	return 0;
}
