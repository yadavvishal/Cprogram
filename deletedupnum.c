#include<stdio.h>
int main()
{
	int k,n,m,a[100],p,i;
  printf("input the array size:");
  scanf("%d",&n);
 
  for(i=0;i<n;i++)
    { 
      scanf("%d",&a[i]);
    }
	for(k=0;k<n;k++)
	{
		for(m=k+1;m<n;m++)
		{
			if(a[k]==a[m])
			{
				for(p=m;p<n;p++)
				{
					printf("dupicate elements:%d",a[p]);
					a[p]=a[p+1];
					
				}
				
				n--;
				m--;
			}
		}
	}printf("After deleting duplicate elements of an arrays:\n");
	for(k=0;k<n;k++)
	{		printf("%d",a[k]);
	}
}           
