#include<stdio.h>
int main()
{
	int i,t,n,j,s,diff,max=-1;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d",&n,&s);
		for(i=4;i>=0;i--)
		{
			for(j=i;j<=n;j++)
			{
				if(s==i+j)
				{
					diff=i-j;
					if(max<diff)
					{

						max=diff;
					}
					
				}
			}
		}printf("%d",max);
	}
	return 0;
}
	
