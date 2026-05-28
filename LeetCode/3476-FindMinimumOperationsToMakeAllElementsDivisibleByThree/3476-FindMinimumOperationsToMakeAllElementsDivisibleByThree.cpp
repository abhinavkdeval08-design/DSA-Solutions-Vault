// Last updated: 29/05/2026, 00:04:32
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] % 3 != 0){
                count++;
            }
        }
        return count;
    }
};