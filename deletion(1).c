#include <stdio.h>

int main()
{
    int a[50],i,n,pos;
    
    printf("input array size:");
    scanf("%d",&n);
    printf("input array elements:\n");
    for(i=0;i<n;i++)
    {
        printf("elements-%d:",i);
				scanf("%d",&a[i]);
    }
    printf("input position where to delete  element:\n");
    scanf("%d",&pos);
    for(i=pos-1;i<n;i++)
   
    	{
    		a[i]=a[i+1];
     		
    	}
    	n--;
    printf("\nThe new list is : "); 
    for(i=0;i<n;i++)
        {
		   printf("  %d",a[i]);
		}  
            printf("\n\n");
    
 }
    
