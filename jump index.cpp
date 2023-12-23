#include <stdio.h>
#include <stdbool.h>

bool canJump(int* nums, int numsSize) {
    int maxReach = 0;

    for (int i = 0; i < numsSize; i++) {
        // If the current index is beyond the current maxReach, return false
        if (i > maxReach) {
            return false;
        }

        // Update maxReach if the current element allows for a greater reach
        maxReach = (i + nums[i] > maxReach) ? i + nums[i] : maxReach;

        // If maxReach is greater than or equal to the last index, return true
        if (maxReach >= numsSize - 1) {
            return true;
        }
    }

    return false;
}

int main() {
    int nums1[] = {2, 3, 1, 1, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    bool result1 = canJump(nums1, size1);

    printf("Example 1:\n");
    printf("Input: [");
    for (int i = 0; i < size1; i++) {
        printf("%d", nums1[i]);
        if (i < size1 - 1) {
            printf(",");
        }
    }
    printf("]\n");

    printf("Output: %s\n\n", result1 ? "true" : "false");

    int nums2[] = {3, 2, 1, 0, 4};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    bool result2 = canJump(nums2, size2);

    printf("Example 2:\n");
    printf("Input: [");
    for (int i = 0; i < size2; i++) {
        printf("%d", nums2[i]);
        if (i < size2 - 1) {
            printf(",");
        }
    }
    printf("]\n");

    printf("Output: %s\n", result2 ? "true" : "false");

    return 0;
}

