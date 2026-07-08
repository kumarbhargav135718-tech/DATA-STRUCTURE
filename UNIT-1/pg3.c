#include <stdio.h>

int main() {
    int A[3], B[3], C[3];
    int i;

    printf("Enter 3 integers for Array A:\n");
    for(i = 0; i < 3; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }


    printf("\nEnter 3 integers for Array B:\n");
    for(i = 0; i < 3; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }


    for(i = 0; i < 3; i++) {
        C[i] = A[i] + B[i];
    }


    printf("\nResult:\n");
    for(i = 0; i < 3; i++) {
        printf("C[%d] = %d + %d = %d\n", i, A[i], B[i], C[i]);
    }

    return 0;
}
