/*Write a program to input a character and check whether it is a vowel or consonant using if–else.*/
#include<stdio.h>
int main()
{
    char alh;
    printf("Enter an alphabet :\n");
    scanf("%c", &alh);
    if(alh=='a' || alh=='A' || alh=='e' || alh=='E' || alh=='i' || alh=='I' || alh=='o' || alh=='O' || alh=='u' || alh=='U')
    {
        printf("%c is a Vowel\n", alh);
    } else{
        printf("%c is a Consonant\n", alh);

    }
    return 0;
}