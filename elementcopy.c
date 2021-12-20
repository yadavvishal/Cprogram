/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a1[50],a2[50],i,n;
    printf("input number of elements store in first array:\n");
    scanf("%d",&n);
    printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&a1[i]);
        }
	   
    for(i=0;i<n;i++)
    {
    a2[i]=a1[i];
    }
    
    printf("\n elements in first array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a1[i]);
    }
    printf("\n\n elements copied into the  second array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\n",a2[i]);
    }
    printf("\n\n");

}
   
    
