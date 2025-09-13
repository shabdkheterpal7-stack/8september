#include<stdio.h>

/*Write a program to print the sum of the first num odd numbers.*/
int main()
{ int num,i,x=0;
    printf("Enter a number to see the sum of first num odd numbers : \n");
    scanf("%d",&num);
    for (i=1;i<=(num*2);i++)
    {   if(i%2!=0){
        x=x+i;
        
    } else {
        continue;
    } 
        
    }printf("Sum of N odd numbers is %d",x);


}