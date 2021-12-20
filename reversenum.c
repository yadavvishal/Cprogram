/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<conio.h>
int main()
{
    int a[50],i,n;
    printf("Input the number of elements store in the array:\n");
    scanf("%d",&n);
    printf("Input elements store in array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Reverse the elements store in array:\n ");
    for(i=n-1;i>=0;i--)
    {
        printf("Reverse elements is :%d\n",a[i]);
    }
    printf("\n\n");
}
    
