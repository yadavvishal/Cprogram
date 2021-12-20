#include<stdio.h>
int main()
{
	int a[2][2],i,j,x=1,y=1,d;
	printf("enter the elements of an array:");
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
			{
					scanf("%d",&a[i][j]);
			}
	}
	
	for(i=1;i<=2;i++)
	{
		for(j=1;j<=2;j++)
			{
				if(i==j)
					{
						x=x*a[i][j];
					}
				else
					{
						y=y*a[i][j];
					} 
			}
	}
	d=(x-y);
	printf("determinant of matrix are:%d",d);
}
	
	

