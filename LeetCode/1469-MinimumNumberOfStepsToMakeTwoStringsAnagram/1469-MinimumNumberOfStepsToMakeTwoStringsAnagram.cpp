// Last updated: 29/05/2026, 00:05:50
class Solution {
public:
    int minSteps(string s, string t) {
        int count[26] = {0};
        for(int i=0;i<s.length();i++){
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }
        int ans = 0;
        for(int i = 0; i < 26; i++){
            if(count[i] > 0) ans += count[i];
        }
        return ans;
    }
};