#include<stdio.h>
#include<math.h>
 
float area_Triangle(float, float, float);
 
 int main()
{
   float a, b, c, Area;
 
   printf("\n Please Enter the three sides of triangle\n");
   scanf("%f%f%f",&a,&b,&c);
 
   Area = area_Triangle(a, b, c);
   printf("\nArea of triangle = %.2f\n", Area);
 
   return 0;
}
 
float area_Triangle( float a, float b, float c )
{
   float s, area;
 
   s = (a+b+c)/2;
   area= sqrt(s*(s-a)*(s-b)*(s-c));
   return (area);
}
