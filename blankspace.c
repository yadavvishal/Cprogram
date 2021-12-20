#include<stdio.h>
#include<string.h>
int main()
{	char a[100];
	int i=0,b=0;
	printf("enter the string:\n");
	scanf("%[^\n]s",a);
	while(a[i]!='\0')
	{
		a[i]=a[i+b];
		{
			if((a[i]==' ')||(a[i]=='\t'))
			{
				b++;
				
			}
			else 
			{
				i++;
			}
		}
	}
	printf("After removing blank spaces from string:\n");
	printf("%s\n",a);
	printf("The number of characters are:\n");
	printf("%d",i-b);
}
