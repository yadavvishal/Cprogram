#include<stdio.h>
int main()
{
 int i,n,a[50];
 int max1=-1000,max2=-1500;
 printf("enter array size:");
 scanf("%d",&n);
 printf("enter array elements:");
 for(i=0;i<n;i++)
 {
   printf("elements -%d:",i);
   scanf("%d",&a[i]);
 }

for(i=0;i<n;i++){
  if(max1<a[i]){
    max2=max1;
    max1=a[i];

    }
  }
 printf("largest element =%d\n ",max1);
 printf("second largest element=%d",max2);

  return 0;
} 
 
