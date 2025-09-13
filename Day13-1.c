#include<stdio.h>
/*Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/
int main()

{
    int a,b,x;
    char op;
    printf("Enter two numbers other than zero: \n");
    scanf("%d %d" ,&a, &b);
    printf("Enter the operator (+, -, *, /, %% ): \n");
    scanf(" %c", &op);

    
        switch(op)
    {
        case '+':
            printf("The sum is %d\n", a+b);
            break;
        case '-':
            printf("The difference is %d\n", a-b);
            break;
        case '*':
            printf("The product is %d\n", a*b);
            break;
        case '/':
            if (b!=0)
            {
                printf("The quotient is %d\n", a/b);
            }
            else if
            (printf("Division by zero is not allowed\n"));
            break;
        case '%':
            if (b!=0)
            {
                printf("The remainder is %d\n", a%b);
            }
            else if
            (printf("Division by zero is not allowed\n"));
            break;  

        default:
            printf("Invalid operator\n");
        
        
        }
        
}