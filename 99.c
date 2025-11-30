//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char date[15];
    int day, month, year;

    printf("Enter date in format dd/mm/yyyy: ");
    gets(date);  
  
    sscanf(date, "%d/%d/%d", &day, &month, &year);

    
    char *months[] = {
        "Jan", "Feb", "Mar", "Apr", "May", "Jun",
        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"
    };

   
    if (month < 1 || month > 12) {
        printf("\nInvalid month number!\n");
        return 1;
    }

   
    printf("\nFormatted date: %02d-%s-%04d\n", day, months[month - 1], year);

    return 0;
}
