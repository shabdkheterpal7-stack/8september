//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    printf("Enter your full name: ");
    gets(name); 

   
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ')
            lastSpace = i;
    }

    printf("\nResult: ");

 
    for (i = 0; i < lastSpace; i++) {
        if (i == 0 && name[i] != ' ')
            printf("%c. ", name[i]);
        else if (name[i - 1] == ' ' && name[i] != ' ')
            printf("%c. ", name[i]);
    }

    if (lastSpace != -1)
        printf("%s\n", &name[lastSpace + 1]);
    else
        printf("%s\n", name); 

    return 0;
}
