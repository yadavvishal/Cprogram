#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,c=0 ;
	char a[100];
	printf("enter the name:");
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n/2;i++)
	{
		if(a[i]==a[n-i-1])
		c++;
	}
	if(c==i)
	{
		printf("string is palindrome");
	}
	else
	{
		printf("string is not palindrome");
	}
}

