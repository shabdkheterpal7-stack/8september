#include<stdio.h>
/*Write a program to input two numbers and display their sum.*/
int main()
{
    float num1,num2,sum;
    printf("Enter the two numbers\n");
    scanf("%f %f", &num1, &num2);
    sum=num1+num2;
    printf("The sum of the two numbers is %f\n",sum);


}