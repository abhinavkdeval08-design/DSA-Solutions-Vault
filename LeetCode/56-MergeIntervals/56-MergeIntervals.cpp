// Last updated: 29/05/2026, 00:06:54
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if (intervals.empty()) return {};
        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;
        vector<int> temp = intervals[0];

        for (int i = 1; i < intervals.size(); i++) {
            if (intervals[i][0] <= temp[1]) {
                temp[1] = max(temp[1], intervals[i][1]);
            } else {
                ans.push_back(temp);
                temp = intervals[i];
            }
        }
        
        ans.push_back(temp);
        return ans;
    }
};