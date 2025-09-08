#include <stdio.h>

int main() {
    char name;
    int age;

    printf("What is the first letter of your name? ");
    scanf(" %c", &name);

    printf("How old are you? ");
    scanf("%d", &age);

    printf("Hello, %c! You are %d years old", name, age);

    return 0;
}
