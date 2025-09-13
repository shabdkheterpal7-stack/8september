#include<stdio.h>
/*Write a program to find profit or loss percentage given cost price and selling price.*/
int main()
{
    float cp,sp,pro,loss;
    printf("Enter the cost price and the selling price:\n");
    scanf("%f %f" ,&cp ,&sp);
    pro= ((sp-cp)/cp)*100;
    loss=((cp-sp)/cp)*100;
    if(sp>cp){
        printf("The profit percentage is %f\n" , pro);
    }else if (sp==cp)
        {
            printf("No profit no loss\n");
        }
    else
    {
        printf("The loss percentage is %f\n" , loss);
    }
    return 0;
}