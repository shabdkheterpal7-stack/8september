#include<stdio.h>
/*Write a program to convert temperature from Celsius to Fahrenheit*/
    void main ()
    {
        float  C,F;
        printf("Enter the city temp in Celcius: ");
        scanf("%f",&C);
        F=(C*9/5)+32;
        printf("The city temp in Fahrenheit is: %f\n", F);
    
    
    }