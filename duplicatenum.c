#include<stdio.h>
int main()
{int i=0,n=0,j=0,index=0, found=0;
  printf("input the array size:");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
    	 {  
      scanf("%d",&a[i]);
      	}
	 for(i=0;i<=n;i++)
		{
			for(j=i+1;j<=n;j++)
			{	if(a[i]==a[j])
				{
				 	printf(" the duplicate numbers:%d\n",a[j]);
					index=i;
					found=1;
					break;
				}
			}
		if (found==1)break;
		}
	printf("%d",index);
	 for(i=index;i<n;i++)
   {
    		a[i]=a[i+1];
   }
    	n--;
    printf("\nThe new list is : "); 
    for(i=0;i<n;i++)
        {
		   printf("  %d",a[i]);
		} printf("\n\n");
    return 0;
}
































