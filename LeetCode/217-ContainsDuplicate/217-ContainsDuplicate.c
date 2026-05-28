// Last updated: 29/05/2026, 00:06:34
#include <stdio.h>
#include <stdbool.h> // bool use karne ke liye
#include <stdlib.h>  // qsort ke liye

// Sorting ke liye comparison function
int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

bool containsDuplicate(int* nums, int numsSize) {
    // 1. Pehle sort karo, varna padosi wala logic fail ho jayega
    qsort(nums, numsSize, sizeof(int), compare);

    for (int i = 0; i < numsSize - 1; i++) {
        if (nums[i] == nums[i + 1]) {
            return true; // Duplicate mil gaya, true bhej do
        }
    }
    return false; // Poora loop khatam, koi duplicate nahi mila
}

