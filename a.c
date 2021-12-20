#include<stdio.h>
int main()
{
  int a[50],i,n,j,temp;
  printf("input array size:");
  scanf("%d",&n);
  printf("input the array elements:");
  for(i=0;i<n;i++)
  {
     printf("elements-%d",i);
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
    printf("%d element",a[1]);
 }
   
