#include<stdio.h>
int main()
{
	int t,i,a,b,c,d,e;
	printf("Enter the test:");
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
		if(a+b<=d && c<=e || a+c<=d && b<=e || b+c<=d && a<=e)
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
