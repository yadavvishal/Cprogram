#include<stdio.h>

float area_circle(float r)
{
	float area;
 	area=3.15*r*r;
	return (area);
}
int main()
{	float r,Area;
	printf("enter the value of r:");
	scanf("%f",&r);
	Area=area_circle(r);
	printf("the area of circle=%f",Area);
	return 0;
}

	
	

