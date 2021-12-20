#include<stdio.h>
int main()
{
  int a[100], i,n ,temp;
  printf("input the array size:\n");
  scanf("%d",&n);
  for(i=0;i<n-1;i++)
  	{
  		int temp;
  		scanf("%d", &temp);
  		a[temp-1] = 1  ;
  	}

  for(i=0;i<n;i++)
  	{
  		if (a[i]==0){
			printf("%d",i+1);
		}

  	}


  return 0;
}
  
