#include<stdio.h>
float area_rectangle(float lenght,float breadth)
{
	float area;
	area=lenght*breadth;
	return (area);
}
int main()
{
	float lenght,breadth,Area;
	printf("enter the value of lenght:");
	scanf("%f",&lenght);
	printf("enter the value of breadth:");
	scanf("%f",&breadth);
	Area=area_rectangle(lenght,breadth);
	printf("the area of rectangle=%f",Area);
	return 0;
}

