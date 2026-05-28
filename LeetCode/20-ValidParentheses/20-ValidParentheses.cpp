// Last updated: 29/05/2026, 00:07:05
class Solution {
public:
    bool isValid(string s) {
        stack<char> st; 
        
        for (int i = 0; i < s.length(); i++) {
            char ch = s[i];
            
            
            if (ch == '(' || ch == '{' || ch == '[') {
                st.push(ch);
            } 
            else {
                
                if (st.empty()) return false;
                
                char topChar = st.top();
               
                if ((ch == ')' && topChar == '(') ||
                    (ch == '}' && topChar == '{') ||
                    (ch == ']' && topChar == '[')) {
                    st.pop(); 
                } else {
                    return false; 
                }
            }
        }
        return st.empty();
    }
};