#include<stdio.h>
int main()
{
    float prt;
    printf("Enter your percentage to get your grade:");
    scanf("%f",&prt);
    if(prt>=90)
        printf("Your grade of is A\n");
    else if(prt>=80)
        printf("Your grade is B\n");
    else if(prt>=70)
        printf("Your grade is C\n");
    else if(prt>=60)
        printf("Your grade is D\n");
    else if(prt>=50)
        printf("Your grade is E\n");
    else
        printf("You Failed your exam\n");  
    return 0;
}