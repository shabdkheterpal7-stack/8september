#include<stdio.h>
/*Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/
int main()
{
    char ch;
    printf("Enter a character:\n");
    scanf("%c", &ch);
    if (ch>='A' && ch<='Z'){
        printf("The character is an uppercase alphabet");
    } else if (ch>='a' && ch<='z'){
        printf("The chracter is the lowercase alphabet");
    } else if ((ch<='9') && (ch>='0')){
        printf("The character is a digit");
    } else {
        printf("The character is a special character");
    }
}
