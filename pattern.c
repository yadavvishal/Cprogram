#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
        {
            for(j=1;j<=n;j++)
            {
							if((i==0)||(j==0)||(i==n)||(j==n))
                printf("%d",i);
            }printf("\n");
        }
}        
