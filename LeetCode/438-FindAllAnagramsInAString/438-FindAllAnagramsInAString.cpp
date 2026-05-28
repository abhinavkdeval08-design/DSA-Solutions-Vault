// Last updated: 29/05/2026, 00:06:15
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
    vector<int> ans;
    if (s.size() < p.size()) return ans; 

    unordered_map<char, int> target_map;
    unordered_map<char, int> window_map;

    for(char c : p) {
        target_map[c]++;
    }

    int i = 0, j = 0;
    int k = p.size();

    while(j < s.size()) {
        window_map[s[j]]++; 

        if (j - i + 1 == k) {
            if (window_map == target_map) {
                ans.push_back(i);
            }

            window_map[s[i]]--;
            if (window_map[s[i]] == 0) {
                window_map.erase(s[i]); 
            }
            i++; 
        }
        j++; 
    }
    return ans;
}
};