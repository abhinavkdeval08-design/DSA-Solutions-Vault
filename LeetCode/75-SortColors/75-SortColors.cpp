// Last updated: 29/05/2026, 00:06:51
class Solution {
public:
    void sortColors(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=1;j<nums.size()-i;j++){
            if(nums[j] < nums[j-1]){
            swap(nums[j-1],nums[j]);}
        }
        }
        
    }
};