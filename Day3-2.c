#include<stdio.h>
/*Write a program to swap two numbers using a third variable.*/
 
void main()
{
    int a,b,c;
    printf("Enter the value of a and b:\n");
    scanf("%d %d" ,&a,&b);
    c=a;
    printf("Before Swaping a=%d and b=%d\n" ,a,b);
    a=b;
    b=c;
    printf("After swaping a=%d and b=%d" ,a,b);
}