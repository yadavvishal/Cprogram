#include<stdio.h>
#include<string.h>

int main()
{
	int i,n,j,k;
	char s[100];
	printf("Enter the string:");
	scanf("%s",s);
	while(s[i]!='\0')
	{
		printf("%c\n",s[i]);
		i++;
	}
	printf("printf subarray:");
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			for(k=i;k<=j;k++)
			{
				printf("%c",s[k]);
			}
		printf("\n");
		}

	}


}
	
