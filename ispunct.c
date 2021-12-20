#include<stdio.h>
#include<ctype.h>
int main()
{
	char c;
	int result;
	printf("enter character:");
	scanf("%c",&c);
	result=ispunct(c);
  	if (result==0)
		printf("%c is not punctuation mark",c);
	else
		printf("%c is punctuation mark",c);
	return 0;
}

