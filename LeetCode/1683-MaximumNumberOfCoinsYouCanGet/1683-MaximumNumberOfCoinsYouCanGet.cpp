// Last updated: 29/05/2026, 00:05:39
class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int ans =0;
        int n = piles.size();
        
        for(int i=n/3;i<n;i+=2){
            ans += piles[i];
        }
        return ans;
    }
};