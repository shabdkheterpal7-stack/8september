#include<stdio.h>
/*Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.*/
int main()
{
    int num;
    printf("Enter the number :\n");
    scanf("%d", &num);
    if (num==0)
    {
        printf("The number is zero\n");
    } else if (num>0)
    {    printf("The number is positive\n");

    } else
    {
        printf("The number is negative\n");
    }

}