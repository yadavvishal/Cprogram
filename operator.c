#include<stdio.h>
int main()
{
    double meal_cost;
    scanf("%lf",&meal_cost);
    int tip_percent; 
    scanf("%d",&tip_percent);   
    int tax_percent;
    scanf("%d",&tax_percent);
		float total_cost;
    double tip=(meal_cost*tip_percent)/100;
    double tax=(tax_percent*tip_percent)/100;
    total_cost= (meal_cost+tip+tax);
		int round_cost=total_cost;  
	  printf("%d",round_cost);
		return 0;
	
}
