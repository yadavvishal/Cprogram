#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int i = 4;
    double d = 4.0;
    char s[] = "HackerRank ";
    int a;
    double b;
    char c[100];
    scanf("%d",&a);
    scanf("%lf",&b);
    scanf("%*[\n]%[^\n]", c);
    printf("%d\n",i+a);
    printf("%.01lf\n",d+b);
    printf("%s%s",s,c);
    return 0;
}
