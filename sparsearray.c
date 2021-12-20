#include<stdio.h>
#include<string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int i=0,n,j=0,N,k=0,count=0;
		int b[N];
	printf("enter the number of words input:");
	scanf("%d",&n);
	
	char c[n][20];
	for(i=0;i<n;i++)
	{
		scanf("%s",c[i]);
	}
	printf("Queries:");
	scanf("%d",&N);
	char s[N][20];
	for(i=0;i<N;i++)
	{
		scanf("%s",s[i]);
	}
	
	 for(i=0;i<N;i++)
        {
            for(j=0;j<n;j++)
            {
                if(strcmp(s[i],c[j])==0)
                {
                    count++;
                }
            }
            b[k]=count;
            count=0;
            k++;
        }
        for(i=0;i<N;i++)
        {
            printf("%d ",b[i]);
        }
        return 0;
    }

