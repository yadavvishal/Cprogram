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
    double tax=(meal_cost*tax_percent)/100;
    total_cost= (meal_cost+tip+tax);
		printf("%f\n",total_cost);
    int round_cost=total_cost;
		printf("%d\n",round_cost);
    float difference=total_cost-round_cost;
    if(difference>=0.5)
    {
        round_cost++;
        printf("%d",round_cost);
    } 
		
    else
    {
        printf("%d",round_cost);
    } 
   
    return 0;
    
}
    


	

