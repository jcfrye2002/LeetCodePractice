class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        //Find the longer string
        int longestString = 0;
        if(word1.length() > word2.length())
            longestString = word1.length();
        else if(word1.length() < word2.length()){
            longestString = word2.length();
        } else{
            longestString = word1.length();
        }

        string str = "";

        for(int i = 0; i < longestString; i++){
            if(i < word1.length()){
                str += word1[i];
            }

            if(i < word2.length()){
                str += word2[i];
            }
        }

        return str;
    }
};