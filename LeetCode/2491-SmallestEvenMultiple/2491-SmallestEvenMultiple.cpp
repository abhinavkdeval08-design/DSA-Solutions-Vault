// Last updated: 29/05/2026, 00:04:51
class Solution {
public:
    int smallestEvenMultiple(int n) {
        if(n%2 == 0){
            return n;
        }
        else{
            return 2*n;
        }
    }
};