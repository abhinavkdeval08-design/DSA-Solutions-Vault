// Last updated: 29/05/2026, 23:58:09
1class Solution {
2public:
3    bool checkSubarraySum(vector<int>& nums, int k) {
4        unordered_map<int, int> mp;
5        mp[0] = -1;
6        int prefixSum = 0;
7        
8        for (int i = 0; i < nums.size(); i++) {
9            prefixSum += nums[i];
10            int rem = prefixSum % k;
11            
12            if (rem < 0) rem += k;
13            
14            if (mp.count(rem)) {
15                if (i - mp[rem] >= 2) {
16                    return true;
17                }
18            } else {
19                mp[rem] = i;
20            }
21        }
22        
23        return false;
24    }
25};