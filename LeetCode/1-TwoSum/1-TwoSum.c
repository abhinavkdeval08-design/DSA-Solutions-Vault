// Last updated: 29/05/2026, 00:07:14
#include <stdlib.h>

typedef struct {
    int key;
    int value;
} Hash;

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    Hash* map = (Hash*)malloc(sizeof(Hash) * numsSize);
    int mapSize = 0;

    for (int i = 0; i < numsSize; i++) {
        int complement = target - nums[i];

        for (int j = 0; j < mapSize; j++) {
            if (map[j].key == complement) {
                int* result = (int*)malloc(sizeof(int) * 2);
                result[0] = map[j].value;
                result[1] = i;
                *returnSize = 2;
                free(map);
                return result;
            }
        }

        map[mapSize].key = nums[i];
        map[mapSize].value = i;
        mapSize++;
    }

    *returnSize = 0;
    free(map);
    return NULL;
}
