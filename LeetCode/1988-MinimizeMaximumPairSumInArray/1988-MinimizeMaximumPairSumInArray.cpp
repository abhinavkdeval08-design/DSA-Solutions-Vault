// Last updated: 29/05/2026, 00:05:19
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i=0;
        int max=0;
        int j=nums.size()-1;
        while(i<j){
        int sum  = nums[i] + nums[j];
        if(sum > max){
            max = sum;
        }
        i++;
        j--;
        }
        return max;
    }
};