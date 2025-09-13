/*Write a program to find the roots of a quadratic equation and categorize them.*/
#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,D,r1,r2;
    printf("Enter coefficients a, b and c:\n");
    scanf("%f %f %f", &a, &b, &c);
    D= (pow((b),2)) - (4*a*c);
    if(D>0) {
        r1= (-b + sqrt(D)) / (2*a);
        r2= (-b - sqrt(D)) / (2*a);
        printf("The roots are different and real\n");
        printf("First root is %.2f\n", r1);
        printf("Second root is %.2f\n", r2);
    } else if(D==0)
    {
        r1=r2=-b/(2*a);
        printf("The roots are real and same \n");
        printf("First root is %.2f\n", r1);
        printf("Second root is %.2f\n", r2);    
    } else {
        r1 = -b/(2*a);
        r2 = sqrt(-D)/2*a;
        printf("The roots are imagenary\n");
        printf("First Root is %.2f + i%.2f\n", r1, r2);
        printf("Second Root is %.2f - i%.2f\n", r1, r2);
    }
}