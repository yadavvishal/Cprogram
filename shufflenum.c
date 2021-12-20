#include<stdio.h>
int main()
{
	int t,n,i,temp1,temp2,a,b,c,d=0,e=0,f=0,big=-1;
	printf("Enter the test:");
	scanf("%d",&t);
	
	for(i=0;i<t;i++)
	{
		int sum=0;
		scanf("%d",&n);
		printf("\n");
		scanf("%d%d%d",&a,&b,&c);
		temp=b;
		b=c;
		c=temp;
		d=d+(a+1)%2;
		e=e+(b+2)%2;
		f=f+(c+3)%2;
		sum=sum+d+e+f;
		if(big<sum)
		{
			big=sum;
		}sum=0,d=0,e=0,f=0
		temp2=b ;
		b=a;
		a=temp2;
		d=d+(a+1)%2;
		e=e+(b+2)%2;
		f=f+(c+3)%2;
		sum=sum+d+e+f;
		if(big<sum)
		{
			big=sum;
		} 
		
		
		
		
		printf("%d",sum);
	}
}
