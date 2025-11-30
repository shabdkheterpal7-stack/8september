//Multiply two matrices.
#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;

  
    printf("Enter number of rows and columns of first matrix: ");
    scanf("%d %d", &r1, &c1);

   
    printf("Enter number of rows and columns of second matrix: ");
    scanf("%d %d", &r2, &c2);

  
    if (c1 != r2) {
        printf("Matrix multiplication not possible! (Columns of A must equal rows of B)\n");
        return 0;
    }

    int A[r1][c1], B[r2][c2], product[r1][c2];

   
    printf("\nEnter elements of first matrix (A):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            printf("A[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &A[i][j]);
        }
    }

  
    printf("\nEnter elements of second matrix (B):\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            printf("B[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &B[i][j]);
        }
    }

   
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            product[i][j] = 0;
        }
    }

    
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                product[i][j] += A[i][k] * B[k][j];
            }
        }
    }

   
    printf("\nProduct of the two matrices (A × B):\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }

    return 0;
}
