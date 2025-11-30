//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>

int main() {
    char src[100], dest[100];

    printf("Enter source file name: ");
    scanf("%s", src);

    printf("Enter destination file name: ");
    scanf("%s", dest);

    FILE *fp1 = fopen(src, "r");
    if (fp1 == NULL) {
        printf("Could not open source file.\n");
        return 1;
    }

    FILE *fp2 = fopen(dest, "w");
    if (fp2 == NULL) {
        printf("Could not open destination file.\n");
        fclose(fp1);
        return 1;
    }

    int ch;
    while ((ch = fgetc(fp1)) != EOF) {
        fputc(ch, fp2);
    }

    fclose(fp1);
    fclose(fp2);

    printf("File copied successfully.\n");

    return 0;
}
