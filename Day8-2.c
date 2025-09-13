#include<stdio.h>
/*Write a program to input three numbers and find the largest among them using if–else.*/
int main ()
{
    int a,b,c;
    printf("Enter three numbers:\n");
    scanf("%d %d %d",&a,&b,&c);
    if (a>b && a>c){
        printf("The largest number is %d",a);
    } else if (b>a && b>c){
        printf("The largest number is %d",b);
        }
      else if (c>b && c>a){
        printf("The largest number is %d",c);
      }  
      else{
        printf("The numbers are equal");
      }
}
