Q119: Write a program to take an integer array as input. Only one element will be repeated. Print the repeated element. Try to find the result in one single iteration.

/*
Sample Test Cases:
Input 1:
nums1 = [1,3,3,4]
Output 1:
3

Input 2:
nums1 = [1,2,2]
Output 2:
2

Input 3:
nums1 = [0,4,1,1,5]
Output 3:
1

*/

#include <stdio.h>
#include <stdbool.h>

int findDuplicate(int nums[], int size) {
    bool seen[100001] = {false}; // Assuming input values are ≤ 100000

    for (int i = 0; i < size; i++) {
        if (seen[nums[i]]) {
            return nums[i]; // Found the duplicate
        }
        seen[nums[i]] = true;
    }
    return -1; // Shouldn't reach here if one duplicate is guaranteed
}

int main() {
    int nums1[] = {1, 3, 3, 4};
    int size1 = sizeof(nums1) / sizeof(nums1[0]);
    printf("Output 1:\n%d\n", findDuplicate(nums1, size1));

    int nums2[] = {1, 2, 2};
    int size2 = sizeof(nums2) / sizeof(nums2[0]);
    printf("Output 2:\n%d\n", findDuplicate(nums2, size2));

    int nums3[] =