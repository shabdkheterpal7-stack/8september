#include<stdio.h>
/*Write a program to print numbers from 1 to n.*/
int main(){
    int i,n;
    printf("Enter the nth term to print numbers till n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("%d ", i);
        
    }return 0;
}