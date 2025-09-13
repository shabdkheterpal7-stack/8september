#include<stdio.h>
/*Write a program to print the product of even numbers from 1 to n.*/
int main()
{
    int num,i,prd=1;
    printf("Enter a number \n");
    scanf("%d", &num);
    for (i=2;i<=(num*2);i++){
        if(i%2==0){
            prd=prd*i;
           
        } else{
            continue;
        }
    } printf("%d",prd);
}