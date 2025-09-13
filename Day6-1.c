#include<stdio.h>
/*Write a program to input an integer and check whether it is even or odd using if–else.*/
int main()
{
    int num;
    printf("Enter the the number :\n");
    scanf("%d", num);
    if (num%2==0)
    {
        printf("The number is even\n");
    } else 
    {
        printf("The number is odd\n");
    }

}