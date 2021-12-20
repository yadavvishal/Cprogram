#include<stdio.h>
#include<ctype.h>
int main()
{
	int c;	
	printf("the printable characters are:");
	for(c=1;c<=127;++c)
	if(isprint(c)!=0)
	{
		printf("%c",c);
	} 
	for(c=1;c<=127;++c)
	if((c==' ') || (c=='\t'))	
	{
		printf("blank spaces are:%c",c);
	}
	return 0;
}

	


