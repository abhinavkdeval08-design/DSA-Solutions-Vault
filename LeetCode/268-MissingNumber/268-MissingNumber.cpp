// Last updated: 29/05/2026, 00:06:26
class Solution {
public:
    int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int sum = n*(n+1)/2;
    for(int i=1;i<n;i++){
        nums[i]+= nums[i-1];
    }
    int ans = sum - nums[n-1];
    return ans;
    }
};