#include <stdio.h>

int main() {
    char name;
    int age;

    printf("enter your name");
    scanf(" %s", &name);

    printf("enter your age ");
    scanf("%d", &age);

    printf("Your name is %d, your age is %d", name, age);

    return 0;
}

