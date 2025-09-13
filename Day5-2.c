#include<stdio.h>
/*Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/
int main()
{
    int hour,min,sec;
    printf("Enter the time in Seconds :\n");
    scanf("%d", &sec);
    hour = sec / 3600;      
    sec= sec % 3600;
    min= sec/60;
    sec= sec %60;
    printf("The time in hour:min:sec is %d:%d:%d\n" ,hour,min,sec);


}