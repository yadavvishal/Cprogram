#include<stdio.h>
#include<stdlib.h>
int main()
{
  int i=0;
  char str[50];
  printf("enter the string:");
  fgets(str, sizeof str, stdin);
  int count=0;
  while(str[i]!='\0')
   {
     if(str[i]=='{')
     count++;
     
     if(str[i]=='}')
     count--;
     

     i++;
    }
    if(count==0)                       
        printf("\n valid");
    else
        printf(" invalid");	
    return 0;
}
   
   
