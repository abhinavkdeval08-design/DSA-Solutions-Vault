// Last updated: 29/05/2026, 00:05:22
class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector<int> ans;

        for(int j=0;j<queries.size();j++){
            int count =0;
            for(int i=0;i<points.size();i++){
            if(((points[i][0]-queries[j][0])*(points[i][0]-queries[j][0]))+((points[i][1]-queries[j][1])*(points[i][1]-queries[j][1])) <= ((queries[j][2])*(queries[j][2]))){
            count++;} } 
            ans.push_back(count); }
            return ans;
    }
};