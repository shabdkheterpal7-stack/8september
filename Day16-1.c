/*Write a program to check if a number is a palindrome.*/
#include<stdio.h>
int main (){
    int rNum=0,num,rem,n;
    printf("Enter the number\n");
    scanf("%d",&num);
    n=num;
    while(num>0){
        rem=num%10;
        rNum=rNum*10+rem;
        num/=10;
    } if(n==rNum){
        printf("Palindrome");
    }else{
        printf("Not a palindrome");
    }
}