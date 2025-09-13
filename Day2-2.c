#include<stdio.h>
/*Write a program to calculate the area and circumference of a circle given its radius.*/
int main()
{
    float r;
    printf("Enter the radius of the circle in M\n ");
    scanf("%f", &r);
    printf("The area of the circle is: %f\n", 3.14*r*r);
    printf("The circumference of the circle is : %f\n", 2*3.14*r);

}