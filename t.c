#include<stdio.h>
#include<stdlib.h>
main()
{
	int *p,i,a,b;
	scanf("%d",&a);
	p=(int*)malloc(a*sizeof(int));
	for(i=0;i<a;i++)
	printf("%d\n",i);
	scanf("%d",&b);
	realloc(p,b);
	for(i=0;i<b;i++)
	printf("%d\n",i);
	free(p);
}
