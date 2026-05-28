// Last updated: 29/05/2026, 00:04:29
class Solution {
public:
    int scoreOfString(string s) {
        int count = 0;
        for(int i=1;i<s.length();i++){
            count += abs(s[i]-s[i-1]);
        }
        return count;
    }
};