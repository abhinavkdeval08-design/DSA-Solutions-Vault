// Last updated: 29/05/2026, 00:05:54
class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        vector<int> pref(arr.size());
        pref[0] = arr[0];
        for(int i=1;i<arr.size();i++){
            pref[i] = pref[i-1] ^ arr[i];
        }
        vector<int> ans;
        for(int j=0;j<queries.size();j++){
            int l = queries[j][0];
            int r = queries[j][1];
            if(l == 0){
                ans.push_back(pref[r]);
            }
            else{
                ans.push_back(pref[r] ^ pref[l-1]);
            }
        }
        return ans;
    } 
};