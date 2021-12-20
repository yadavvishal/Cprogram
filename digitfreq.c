#include<stdio.h>
#include<string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	char s[100];
	char a[10]="0123456789";
	int b[10]={0};
	int i,temp,j,count=0,k=0;
	scanf("%[^\n]",s);
	int l = strlen(s);
  for(int i = 0; i < l; i++)
	{
		 for(j=0;j<l-1;j++)
      {
         if(s[j]>s[j+1])
           {
              temp=s[j];
              s[j]=s[j+1];
              s[j+1]=temp;
            }
        }
    }
	printf("String after sorting  - %s \n", s);
	for( i = 0; i < l; i++)
	{
		for(j=0;j<l;j++)
			{
				if(s[j]==a[k])
					{
						count++;
					}
			}
		b[k]=count;
		count=0;
		k++;
	}
	for(i=0;i<10;i++);
	{
		printf("%d",b[i]);
	}
}
	
    
