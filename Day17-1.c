/*Write a program to check if a number is an Armstrong number.*/
#include<stdio.h>
#include<math.h>
int main()
{
    int num,a=0,arms,i=1;
    printf("Enter a number to check whether it's a armstrong number\n");
    scanf("%d", &num);
    while(num>0){
        i=num%10;
        num=num/10;
        i=i*i;
        arms=a+i;
        a=arms;
    } if (arms==num){
        printf("Armstrong Number");
    } else {
        printf("Not a armstrong number");
    }
}