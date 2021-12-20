/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a[50],i,n,j,temp,max,min;
    printf("Input size of array:\n");
    scanf("%d",&n);
    printf("Input elements of an array:\n");
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
    printf("%d is max",a[0]);
    printf("\n\n");
    printf("%d is min",a[n-1]);
    
}
    
