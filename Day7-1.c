#include<stdio.h>
/*Write a program to input a year and check whether it is a leap year or not using conditional statements.*/

int main()
{
    int yr;
    printf("Enter a year :\n");
    scanf("%d", &yr);
    if((yr%4==0 && yr%100!=0) || (yr%400==0))
    {
        printf("Leap year\n");
    } else{
        printf("Not a leap year\n");
    }   
}