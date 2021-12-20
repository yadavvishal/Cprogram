#include <stdio.h>

int main(void) {
    int i,t,a[100],j;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
	for(j=1;j<=1000;j++)
        {
            if(a[i]==j)
            {
                printf("East");
                break;
            }
            if(a[i]==j)
            {
                printf("\nWest");
                break;
            }
            if(a[i]==j)
            {
                printf("\nSouth");
                break;
            
            }
        }
        
    }
    
	return 0;
}


