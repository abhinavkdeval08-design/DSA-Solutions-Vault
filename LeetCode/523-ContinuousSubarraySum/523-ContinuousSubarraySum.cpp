// Last updated: 29/05/2026, 23:59:39
1class Solution {
2public:
3    bool checkSubarraySum(vector<int>& nums, int k) {
4        unordered_map<int, int> mp;
5        mp[0] = -1;
6        int prefsum =0;
7        for(int i=0;i<nums.size();i++){
8            prefsum += nums[i];
9            int rem = prefsum%k;
10            if (rem < 0) rem += k;
11            if(mp.find(rem) != mp.end(rem)){
12                if((i-mp[rem]) >=2){
13                    return true;
14                } }
15                else{
16                    mp[rem] = i;
17                }
18            
19        }
20        return false;
21    }
22};