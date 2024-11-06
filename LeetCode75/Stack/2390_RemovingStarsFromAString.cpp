class Solution {
public:
    string removeStars(string s) {
        if(!s.contains('*')){
            return s;
        }
        
        stack<char> sta;

        for(char c : s){
            if(c == '*'){
                if(!sta.empty()){
                    sta.pop();
                }
            } else{
                sta.push(c);
            }
        }

        string result;
        while(!sta.empty()){
            result = sta.top() + result;
            sta.pop();
        }

        return result;
    }
};