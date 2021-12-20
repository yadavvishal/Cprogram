#include<stdio.h>
int main()
{
	int i,t,j,n,a[100];
	
	printf("Enter the number of test cases:");
	scanf("%d",&t);	
	printf("Enter the value of number of test cases in all:");
	scanf("%d",&n);
	
	for(i=0;i<t;i++)
	{
		for(j=0;j<;j++)
		{	
			scanf("%d",&a[j]);
		}
		if(a[0]+a[1]<=a[3] && a[2]<=a[4] || a[0]+a[2]<=a[3] && a[1]<=a[4] || a[1]+a[2]<=a[3] && a[0]<=a[4])
		{
			printf("YES");
		}
		else
		{
			printf("NO");
		}
	}
	return 0;
}

	
		
		
