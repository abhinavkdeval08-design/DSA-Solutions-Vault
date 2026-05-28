// Last updated: 29/05/2026, 00:05:58
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int>> ans;
        unordered_map<int, vector<int>> mp;
        
        for(int i = 0; i < groupSizes.size(); i++) {
            int size = groupSizes[i];
            mp[size].push_back(i);
            
            if(mp[size].size() == size) {
                ans.push_back(mp[size]);
                mp[size].clear();
            }
        }
        
        return ans;
    }
};