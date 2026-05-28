// Last updated: 29/05/2026, 00:07:10
#include <limits.h>

double findMedianSortedArrays(int* nums1, int m, int* nums2, int n) {

    if (m > n)
        return findMedianSortedArrays(nums2, n, nums1, m);

    int low = 0, high = m;

    while (low <= high) {

        int partitionX = (low + high) / 2;
        int partitionY = (m + n + 1) / 2 - partitionX;

        int maxLeftX = (partitionX == 0) ? INT_MIN : nums1[partitionX - 1];
        int minRightX = (partitionX == m) ? INT_MAX : nums1[partitionX];

        int maxLeftY = (partitionY == 0) ? INT_MIN : nums2[partitionY - 1];
        int minRightY = (partitionY == n) ? INT_MAX : nums2[partitionY];

        if (maxLeftX <= minRightY && maxLeftY <= minRightX) {

            if ((m + n) % 2 == 0)
                return ((double)(maxLeftX > maxLeftY ? maxLeftX : maxLeftY) +
                        (minRightX < minRightY ? minRightX : minRightY)) / 2;

            else
                return (double)(maxLeftX > maxLeftY ? maxLeftX : maxLeftY);
        }

        else if (maxLeftX > minRightY)
            high = partitionX - 1;

        else
            low = partitionX + 1;
    }

    return 0;
}
