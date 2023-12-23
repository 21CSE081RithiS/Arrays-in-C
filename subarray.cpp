#include <stdio.h>

int maxSubArray(int* nums, int numsSize) {
    int maxSum = nums[0]; // Initialize with the first element
    int currentSum = nums[0];

    for (int i = 1; i < numsSize; i++) {
        // If adding the current element increases the sum, include it in the subarray
        currentSum = (currentSum + nums[i] > nums[i]) ? currentSum + nums[i] : nums[i];

        // Update maxSum if the current subarray sum is greater
        maxSum = (currentSum > maxSum) ? currentSum : maxSum;
    }

    return maxSum;
}

int main() {
    int nums1[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    int result1 = maxSubArray(nums1, size1);

    printf("Example 1:\n");
    printf("Input: [");
    for (int i = 0; i < size1; i++) {
        printf("%d", nums1[i]);
        if (i < size1 - 1) {
            printf(",");
        }
    }
    printf("]\n");

    printf("Output: %d\n\n", result1);

    int nums2[] = {1, 2, 3, -2, 5};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    int result2 = maxSubArray(nums2, size2);

    printf("Example 2:\n");
    printf("Input: [");
    for (int i = 0; i < size2; i++) {
        printf("%d", nums2[i]);
        if (i < size2 - 1) {
            printf(",");
        }
    }
    printf("]\n");

    printf("Output: %d\n", result2);

    return 0;
}

