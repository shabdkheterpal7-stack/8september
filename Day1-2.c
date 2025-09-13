#include<stdio.h>
/*Write a program to input two numbers and display their sum, difference, product, and quotient.

*/ 
void main()
{
    float num1,num2;
    printf("Enter the two numbers\n");
    scanf("%f %f" , &num1 ,&num2);
    printf("The sum of the two numbers is %f\n", num1+num2);
    printf("The difference of the two numbers is %f\n", num1-num2); 
    printf("The product of the two numbers is %f\n", num1*num2);
    if (num2!=0)
    {
        printf("The quotient of the two numbers is %f\n", num1/num2);
    }
    else if
    (printf("Division by zero is not allowed\n")); 
}
