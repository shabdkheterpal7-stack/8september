#include<stdio.h>
/*Write a program to find and display the sum of the first n natural numbers.*/
int main()
{
    int n,sum,i;
    sum=0;
    printf("Enter the value of n:\n");
    scanf("%d" ,&n);
    for (i=1;i<n+1;i++)
    {
        sum=sum+i;
    }
    printf("The sum of first %d natural numbers is %d\n", n,sum);   
    return 0;
}