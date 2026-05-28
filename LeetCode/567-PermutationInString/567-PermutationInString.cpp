// Last updated: 29/05/2026, 00:06:07
class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> countS1(26, 0);
        vector<int> countS2(26, 0);
        for(char c:s1) countS1[c - 'a']++;
        if (s1.length() > s2.length()) return false;
        for(int i=0;i<s1.length();i++) {
            countS2[s2[i] - 'a']++;
        }
        if(countS1 == countS2) return true;
        for (int i = s1.length(); i < s2.length(); i++) {
            countS2[s2[i]- 'a']++;
            countS2[s2[i-s1.length()] - 'a']--;
            if(countS1 == countS2) return true;
        }
        return false;
    }
};