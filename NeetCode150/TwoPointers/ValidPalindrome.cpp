class Solution {
public:
    bool isPalindrome(string s) {
        char left = 0;
        char right = s.length() - 1;

        int alphaCount = 0;
        for(char c : s){
            if(isalnum(c)){
                alphaCount++;
            }
        }

        int check = alphaCount / 2;
        while(check != 0){
            if(!isalnum(s.at(left))){
                left++;
            } else if(!isalnum(s.at(right))){
                right--;
            } else if(toupper(s.at(left)) != toupper(s.at(right))){
                return false;
            } else{
                right--;
                left++;
                check--;
            }
        }

        return true;
    }
};
