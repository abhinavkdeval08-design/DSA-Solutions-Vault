// Last updated: 29/05/2026, 00:07:03
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int first =-1;
        int last =-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == target){
               if(first == -1){
                first = i;
               }
            
            last = i;}
        }
        return {first, last};
    }
};