#include<stdio.h>
/*Write a program to calculate electricity bill based on units consumed with these rates:
First 100 units at ₹5/unit
Next 100 units at ₹7/unit
Next 100 units at ₹10/unit
Above at ₹12/unit*/

int main()
{
    int units;
    printf("Enter the electric units consumed ");
    scanf("%d",&units);
    if(units<101){
        printf("Your electricity bill is Rs.%d",units*5);
    }else if (units<201){
        printf("Your elsctriciy bill is Rs.%d",units*7);
    }else if (units<301){
        printf("Your bill is Rs.%d",units*10);
    }else{
        printf("Your bill is Rs.%d",units*12);
    }
    return 0;
}