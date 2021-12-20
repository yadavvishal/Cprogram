#include<stdio.h>
#include<string.h>
int main()
{int i,l,temp,j;
	char ch[100];
	printf("enter a character:");
	scanf("%s",ch);
	l=strlen(ch);
	printf("ascii value of character is:\n");
	for(i=0;i<l;i++)
	{
		printf("%d\n",ch[i]);
	}
	 for(i=0;i<l;i++)
    {
        for(j=0;j<l-1;j++)
        {
            if(ch[j]>ch[j+1])
            {
                temp=ch[j];
                ch[j]=ch[j+1];
                ch[j+1]=temp;
            }
        }
    }
	 printf("ascii value in ascending order are:\n");
    for(i=0;i<l;i++)
    {
        printf("%d\n ",ch[i]);
    }printf("After sort the character of strings are:\n");
	for(i=0;i<l;i++)
	{
		printf("%c",ch[i]);
	}
	return 0;
}
