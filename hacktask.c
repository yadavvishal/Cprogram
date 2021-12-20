#include<stdio.h>
int main()
{
	int k,n,i,j,a[100],count=0,temp,result,b;
	printf("Enter the number of input:");
	scanf("%d",&n);
	printf("Enter the fixed sweetness input:");
	scanf("%d",&k);
	printf("Enter the numbers:");
	for(i=0;i<n;i++)
	{
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
	 printf("the array in ascending order is:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n ",a[i]);
    }
		for(i=0;i<n;i++)
		{
			if(a[i]<k && a[i+1]<k)
			{
				result=(1*a[i]+2*a[i+1]);
				count++;
			}
			else
			{
				return -1;
			}
			i=i+2;
			b=count;
		}
		printf("Minimum numbers require to greater the sweetness:=%d",b);
}
