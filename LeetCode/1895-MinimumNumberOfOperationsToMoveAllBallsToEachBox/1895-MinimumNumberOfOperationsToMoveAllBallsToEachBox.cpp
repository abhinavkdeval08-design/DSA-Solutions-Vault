// Last updated: 29/05/2026, 00:05:23
class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int> ans;
        for(int i=0;i<boxes.length();i++){
            int total_operations = 0;
            for(int j=0;j<boxes.length();j++){
            if(boxes[j] == '1'){
            total_operations += abs(i - j);
            } }
            ans.push_back(total_operations);
        }
        return ans;
    }
};