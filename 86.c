//Check if a string is a palindrome.
#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0, isPalindrome = 1;

    printf("Enter a string: ");
    gets(str);  

   
    while (str[length] != '\0') {
        length++;
    }

   
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }

   
    if (isPalindrome)
        printf("\nThe string is a palindrome.\n");
    else
        printf("\nThe string is not a palindrome.\n");

    return 0;
}
