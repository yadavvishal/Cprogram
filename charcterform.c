#include<stdio.h>
int main()
{
 int i,j;
 char c='A';
 for(i=65;i<=69;i++){
	for(j=65;j<=i;j++){
				printf("%c",c);
		        c++;
			}
		printf("\n");
	}
 return 0;
}
