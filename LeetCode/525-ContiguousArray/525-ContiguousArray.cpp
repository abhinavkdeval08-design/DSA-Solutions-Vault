// Last updated: 29/05/2026, 00:06:12
class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int, int> mp;
        int currSum = 0;
            int leng =0;
            mp[0] = -1;
            
            for(int i=0;i<nums.size();i++){
                if(nums[i] == 0)  currSum++;
                if(nums[i] == 1)  currSum--;
                if (mp.find(currSum) != mp.end()) {
                    leng = max(leng, i - mp[currSum]);
                }
                else{
                    mp[currSum] = i;
                }
            }
            return leng;
            }
};