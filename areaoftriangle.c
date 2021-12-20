#include<stdio.h>
#include<math.h>
 
double area_triangle( float a, float b, float c )
{
   double s, area;
 
   s = (a+b+c)/2;
   area= sqrt(s*(s-a)*(s-b)*(s-c));
   return (area);
}
 
 int main()
{
   float a, b, c;
   double Area;
 
   printf("\n Please Enter the three sides of triangle\n");
   scanf("%f%f%f",&a,&b,&c);
 
   Area = area_triangle(a, b, c);
   printf("\nArea of triangle = %2f\n", Area);
 
   return 0;
}
 

