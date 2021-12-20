#include<stdio.h>
int main()
{
	int i,t,j,n,a[100];
	
	printf("Enter the number of test cases:");
	scanf("%d",&t);	
	
	for(i=0;i<t;i++)
	{
		for(i=0;i<5;i++)
		{
			  scanf("%[^\n]",a[1]);
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
