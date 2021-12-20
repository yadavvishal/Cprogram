#include<stdio.h>
int main()
{
    int data[5],top;
    int  ch,temp;
    ch=0;
    while(ch!=4)
    {
        printf("\n=========");
        printf("\n   STACK OPERATION");
        printf("\n 1. push");
        printf("\n 2. pop");
        printf("\n 3. peek");
        printf("\n 4. exit");
        printf("enter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: if(top==4)
            printf("\n stack is full");
            else
            {
                printf("\n\n enter data:");
                scanf("%d",&temp);
            }
            data[++top]=temp;
            case 2: if(top==-1)
            printf("\n stack is empty:");
            else
            {
                printf("\n pop element:%d",data[top]);
                top--;
            }
            break;
            case 3: if(top==-1) 
            printf("\n stack is empty:");
            else
            {
                printf("\n peek element:%d",data[top]);

            }
            break;
            default: printf("\n not a good choice");
            break;

    
        }


    }
    

}