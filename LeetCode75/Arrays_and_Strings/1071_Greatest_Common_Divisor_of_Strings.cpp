class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        //Find the shorter string
        string shortest_string;
        string longest_string;
        if(str1.length() < str2.length() || str1.length() == str2.length()){
            shortest_string = str1;
            longest_string = str2;
        } else{
            shortest_string = str2;
            longest_string = str1;
        }

        int shortest_string_length = shortest_string.length();
        int longest_string_length = longest_string.length();

        if(str1 == str2){
            return str1;
        }

        for(unsigned int i = shortest_string_length; i > 0; i--){
            if(longest_string_length % i == 0 && shortest_string_length % i == 0){
                string test = shortest_string.substr(0,i);

                string temp1 = "";
                for(unsigned int j = 0;  j < (shortest_string_length / i); j++){
                    temp1 += test;
                }

                //cout << temp1 << endl;

                string temp2 = "";
                for(unsigned int j = 0; j < (longest_string_length / i); j++){
                    temp2 += test;
                }

                //cout << temp2 << endl;

                if(temp1 == shortest_string && temp2 == longest_string){
                    return test;
                }
            }
        }

        return "";
    }
};