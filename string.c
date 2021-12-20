#include<stdio.h>
#include<string.h>
int main()
{
	int i,n,j,temp,t;
	
	printf("enter the number of words input:");
	scanf("%d",&n);
	char name[n][20];
	for(i=0;i<n;i++)
	{
		scanf("%s",name[i]);
	}
	printf("print the words :");
	for(i=0;i>n;i++)
	{
		printf("%s\t",name[i]);
	}
	for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            if(name[j]<name[j+1])
            {
                  strcpy(t, name[j]);
                  strcpy(name[j], name[j+1]);
                  strcpy(name[j+1], t);
									printf("%s\n",name[i]);
            }printf("\n"); 
 

        }
    }
}

	


