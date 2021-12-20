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
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
   
    for(i=0;i<n;i++)
    {
       if(i==0)
				printf("first element:%d",a[i]);
			 else if(i==n-1)
				printf("Last element:%d",a[i]);
			 
	
    }
    
 }
   
