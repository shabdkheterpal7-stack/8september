#include<stdio.h>
#include<math.h>
/*Write a program to calculate simple and compound interest for given principal, rate, and time.*/
int main()
{
    float p,r,t,Si,Ci;
    printf("Enter the Principle Amount ,Rate and Time in yrs :\n");
    scanf("%f %f %f", &p, &r, &t);
    Si=(p*r*t)/100;
    printf("The Simple Interest is : %.3f\n", Si);
    Ci=p * pow((1+r/100),t);
    Ci =Ci-p;
    printf("The Compound Interest is : %.3f\n", Ci);
}