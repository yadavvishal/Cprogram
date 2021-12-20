#include <stdio.h>

int main(void) {
    int i,n,t,sum;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       scanf("%d",&n);
       sum=(n*(n+1))/2;
       {
           if(sum%2!=0)
           {
               printf("%d",n-1);
              
           }
           else
           {
               printf("%d",n);
           }
       }
    }
  
	return 0;
}


