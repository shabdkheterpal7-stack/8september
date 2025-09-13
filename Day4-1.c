#include<stdio.h>
/*Write a program to swap two numbers without using a third variable.*/
int main()
{
    int num1,num2;
    printf("Enter two different numbers: \n");
    scanf("%d %d", &num1, &num2);
    printf("Before swapping the numbers are num1= %d and num2= %d\n", num1, num2);
    num1=num1+num2; 
    num2=num1-num2; 
    num1=num1-num2; 
    printf("After swapping the numbers are num1= %d and num2= %d", num1, num2);
         
    return 0;
}