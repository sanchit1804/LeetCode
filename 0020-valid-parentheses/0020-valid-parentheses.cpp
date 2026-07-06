class Solution {
public:
    
    stack<char> st;    
    
    bool isValid(string s) {
        
        for (char c : s) { 
            if (c == '(' || c == '{' || c == '['){
                st.push(c);
            }
            else{
                 if (st.empty() ||  (c == ')' && st.top() != '(') || (c == '}' && st.top() != '{') || (c == ']' && st.top() != '[')){
                    return false;
            }
            st.pop();
            }
     
    }   return st.empty();
}};