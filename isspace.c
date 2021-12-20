#include<stdio.h>
#include<ctype.h>
int main()
{
	char c;
	int result;
	printf("enter character:");
	scanf("%c",&c);
	result=isspace(c);
	if (result==0)
    	printf("%c is not a white space character",c);
	else
		printf("%c is white space character",c);
	return 0;
}
