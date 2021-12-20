#include <stdio.h>

int main()
{
     int a[50],i,n,j,temp;
     int value=1;
     printf("input array size:\n");
     scanf("%d",&n);
     printf("elements of an array:\n");
     for(i=0;i<n;i++)
     {
         printf("elements-%d:",i);
         scanf("%d",&a[i]);
     }
     for(i=0;i<n;i++)
    {
    for(j=0;j<n-1;j++)
    {
        if(a[j]<a[j+1])
        {
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
    }
    }
    printf("the array in descending order is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n ",a[i]);
    }
    for(i=n;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    
        a[0]=value;
        n++;
    
    printf("the array after insertion:\n");
    for(i=0;i<n;i++)
    {
        printf("a[%d]=%d\n",i,a[i]);
    }
}
