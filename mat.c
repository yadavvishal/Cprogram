#include<stdio.h>


int main()
{
	int t;		

	scanf("%d",&t);
	int a[3][5],i,j;
	for(i=0;i<t;i++)
	{
		for(j=0;i<5;j++)
		{
			
			scanf("%d",&a[i][j]);
		}	
		
	}
	for(i=0;i<3;i++)
	{
		
		{
			if(a[i][j]+a[i][j+1]<=a[i][j+3] && a[i][j+2]<=a[i][j+4] || a[i][j]+a[i][j+2]<=a[i][j+3] && a[i][j+1]<=a[i][j+4] || a[i][j+1]+a[i][j+2]<=a[i][j+3] && a[i][j]<=a[i][j+4])
			{
				printf("YES");
			}
			else
			{
				printf("NO");
			}	
	       }
	}
	return 0;
	
	
}
