/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
#include <stdlib.h>
#include <stdbool.h>
bool existsInArray(int* arr, int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}
int** findDifference(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize, int** returnColumnSizes) {
    int** result = (int**)malloc(2 * sizeof(int*));
    result[0] = (int*)malloc(nums1Size * sizeof(int));
    result[1] = (int*)malloc(nums2Size * sizeof(int));
    int count1 = 0, count2 = 0;
    for (int i = 0; i < nums1Size; i++) {
        if (!existsInArray(nums2, nums2Size, nums1[i]) && !existsInArray(result[0], count1, nums1[i])) {
            result[0][count1++] = nums1[i];
        }
    }
    for (int i = 0; i < nums2Size; i++) {
        if (!existsInArray(nums1, nums1Size, nums2[i]) && !existsInArray(result[1], count2, nums2[i])) {
            result[1][count2++] = nums2[i];
        }
    }
    *returnColumnSizes = (int*)malloc(2 * sizeof(int));
    (*returnColumnSizes)[0] = count1;
    (*returnColumnSizes)[1] = count2;
    result[0] = (int*)realloc(result[0], count1 * sizeof(int));
    result[1] = (int*)realloc(result[1], count2 * sizeof(int));
    *returnSize = 2;
    return result;
}
