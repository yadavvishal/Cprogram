#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main()
{
    
    int n;
    int d;
    scanf("%d %d", &n, &d);  
    int a[n],s[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);    
    }
    for (int i = 0; i < n; i++)
    {
        s[i]= a[(i + d) % n];    
				printf("%d",s[i]);
    }
  
    
    return 0;
}
