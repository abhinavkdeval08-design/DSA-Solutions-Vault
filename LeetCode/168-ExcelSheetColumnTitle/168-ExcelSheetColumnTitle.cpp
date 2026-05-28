// Last updated: 29/05/2026, 00:06:39
class Solution {
public:
    string convertToTitle(int columnNumber) {
        int n =columnNumber;
        string s;
        while(n>0){
            n--;
            s +=( 'A'+n%26);
            n/=26;
        }
        reverse(s.begin(),s.end());
        return s;
    }
};