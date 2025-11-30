//Write a program to swap the first and last digit of a number.
#include <stdio.h>
#include <math.h>

int main() {
    int num, first, last, digits, swappedNum;

    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num; 
    last = num % 10; 
   
    digits = (int)log10(num);

    first = num / pow(10, digits);

   \
    swappedNum = num % (int)pow(10, digits); 
    swappedNum = swappedNum - last;       

   
    swappedNum = last * pow(10, digits) + swappedNum + first;

    printf("Number after swapping first and last digit of %d is: %d\n", original, swappedNum);

    return 0;
}
