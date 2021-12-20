#include<stdio.h>
int main()
{int i,j,a1[50],a2[50],n1,n2,merge[100],k,m,l,p;
	printf("enter the size of 1 array:");
	scanf("%d",&n1);
	printf("enter the elements of 1 array:");
	for(i=0;i<n1;i++){
		scanf("%d",&a1[i]);
		merge[i]=a1[i];}
  printf("enter the size of 2 array:");
	scanf("%d",&n2);
	printf("enter the elements of 2 array:");
	for(j=0;j<n2;j++){
		scanf("%d",&a2[j]);
		merge[i+j]=a2[j];}
	
	l=(n1+n2);
	for(k=0;k<l;k++)
	{
		for(m=k+1;m<l;m++)
		{
			if(merge[k]==merge[m])
			{
				for(p=m;p<l-1;p++)
				{
					merge[p]=merge[p+1];
				}
				l--;
				m--;
			}
		}
	}printf("After merging the arrays:\n");
	for(k=0;k<l;k++){
		printf("%d",merge[k]);}
}           
