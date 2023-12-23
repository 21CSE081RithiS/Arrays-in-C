#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    for (int i = digitsSize - 1; i >= 0; i--) {
        if (digits[i] < 9) {
            digits[i] += 1;
            (*returnSize) = digitsSize;
            return digits;
        } else {
            digits[i] = 0;
        }
    }

    (*returnSize) = digitsSize + 1;
    int* res = (int*)malloc((*returnSize) * sizeof(int));
    res[0] = 1;

    return res;
}

int main() {
    int digits1[] = {1, 2, 3};
    int size1 = sizeof(digits1) / sizeof(digits1[0]);
    int returnSize1;

    int* result1 = plusOne(digits1, size1, &returnSize1);

    printf("Example 1:\n");
    printf("Input: [");
    for (int i = 0; i < size1; i++) {
        printf("%d", digits1[i]);
        if (i < size1 - 1) {
            printf(",");
        }
    }
    printf("]\n");

    printf("Output: [");
    for (int i = 0; i < returnSize1; i++) {
        printf("%d", result1[i]);
        if (i < returnSize1 - 1) {
            printf(",");
        }
    }
    printf("]\n\n");

    int digits2[] = {9};
    int size2 = sizeof(digits2) / sizeof(digits2[0]);
    int returnSize2;

    int* result2 = plusOne(digits2, size2, &returnSize2);

    printf("Example 2:\n");
    printf("Input: [");
    for (int i = 0; i < size2; i++) {
        printf("%d", digits2[i]);
        if (i < size2 - 1) {
            printf(",");
        }
    }
    printf("]\n");

    printf("Output: [");
    for (int i = 0; i < returnSize2; i++) {
        printf("%d", result2[i]);
        if (i < returnSize2 - 1) {
            printf(",");
        }
    }
    printf("]\n");

    free(result1);
    free(result2);

    return 0;
}
}
