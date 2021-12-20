#include<stdio.h>
int main()
{
    float num1,num2,result;
    char op;
    printf("Enter the num1:");
    scanf("%f",&num1);
    printf("Enter the operation:");
    scanf("%c",&op);
    printf("Enter the second num2:");
    scanf("%f",&num2);
    switch(op)
    {
    case '-':
        result=num1-num2;
        printf("%f",result);
        break;    
    case '+':
        result=num1+num2;
        printf("%f",result);
        break;
    case'/':
        result=num1/num2;
        printf("%f",result);
        break;
    case'*':
        result=num1*num2;
        printf("%f",result);
        break;
    default:
        printf("The op is not valid:");
        break;
    }
    return 0;
}

        