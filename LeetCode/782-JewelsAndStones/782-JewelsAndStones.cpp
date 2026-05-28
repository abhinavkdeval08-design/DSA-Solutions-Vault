// Last updated: 29/05/2026, 00:06:05
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(int i=0; i<stones.length();i++){
            for(int j=0; j<jewels.length();j++)
            if(stones[i] == jewels[j]){
                count++;
                break;
            }
        }
        return count;
    }
};