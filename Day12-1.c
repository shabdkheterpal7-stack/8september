#include<stdio.h>
/*Write a program to calculate a library fine based on late days.*/
int main()
{ int days,fine;
    printf("Enter the number of days you were late to submit the book : " );
    scanf("%d",&days);
    if(days<5){
        fine=days*2;
        printf("The fine is %d Rs",fine);
    } else if (days<9){
        fine=days*4;
        printf("The fine is %d Rs",fine);
    } else if (days<16){
        fine=days*6;
        printf("The fine is %d Rs",fine);
    } else if (days<31){
        fine=days *8;
        printf("The fine is %d Rs",fine);
    } else{
        printf("Membership Cancelled");
    }

}