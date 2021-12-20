#include<stdio.h>

int main()
{
	int i=0,c=1;
	char* str[50];
	printf("enter the string:");
	scanf("%s",str);
	while(str[i++]!='\0')
	{
		if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' ||  str[i]=='u')
			{
				c++;
				printf("%s",str[i]);
			}
		else
			{			
				break;
	    }	
	}
	printf("vowels in string is :%d",c);
	return 0;
}
