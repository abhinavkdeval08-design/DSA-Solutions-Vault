// Last updated: 29/05/2026, 00:04:38
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<int> freq(nums.size()+1, 0);
        vector<vector<int>> ans;
        for(int i=0;i<nums.size();i++){
            if (ans.size() == freq[nums[i]]) {
            ans.push_back({}); 
            }
            ans[freq[nums[i]]].push_back(nums[i]);
            freq[nums[i]]++;
        }
        return ans;
    }
};