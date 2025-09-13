#include<stdio.h>
/*Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.*/
int main()
{
    int a,b,c;
    printf("Enter length of all Three sides of triangle:\n");
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c)
    {
        printf("The triangle is Equilateral\n");

    } else if (a!=b && b!=c && a!=c)
    {
        printf("The Triangle is Scalene");

    } else
    {
        printf("The triangle is Isosceles");
    
    }
    return 0;
}
