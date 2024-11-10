class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        unordered_map<char, char> closeToOpen = {
            {')', '('},
            {'}', '{'},
            {']', '['}
        };
        
        for(char c : s){
            if(closeToOpen.count(c)){ //if c is a closing parenthesis
                if(!st.empty() && st.top() == closeToOpen[c]){ //if stack is not empty and the top of the stack is the matching parenthesis
                    st.pop();
                } else{
                    return false;
                }
            } else{
                st.push(c);
            }
        }

        return st.empty();
    }
};
