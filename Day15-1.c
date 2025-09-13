#include<stdio.h>
/*Write a program to reverse a given number.
*/
int main (){
    int i,num;
    printf("Enter a number to reverse it\n");
    scanf("%d",&num);
    while(num>0){
        i=num%10;
        num=num/10;
        printf("%d",i);
    }
}