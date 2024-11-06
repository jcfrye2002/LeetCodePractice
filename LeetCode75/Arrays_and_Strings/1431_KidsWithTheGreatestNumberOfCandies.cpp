class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max = 0;

        for(unsigned int i = 0; i < candies.size(); i++){
            if(candies.at(i) > max){
                max = candies.at(i);
            }
        }

        int diff = max - extraCandies;

        vector<bool> c;

        for(unsigned int i = 0; i < candies.size(); i++){
            if(diff > candies.at(i)){
                c.push_back(false);
            } else{
                c.push_back(true);
            }
        }

        return c;
    }
};