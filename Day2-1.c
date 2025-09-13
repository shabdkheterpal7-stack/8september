#include<stdio.h>
/*Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/
void main()
{
    int lg,brd;
    printf("Enter the length and width of the rectangle: \n");
    scanf("%d %d", &lg, &brd);
    printf("The area of the rectangle is: %d\n", lg * brd);
    printf("The perimeter of the rectangle is %d" , (lg+brd)*2);
}
  