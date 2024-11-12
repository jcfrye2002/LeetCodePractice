class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> result;

        unordered_map<int, int> m;

        for(unsigned int i = 0; i < nums.size(); i++){
            m[nums.at(i)] = i; 
        }

        for(unsigned int i = 0; i < nums.size(); i++){
            int difference = target - nums.at(i);
            if(m.count(difference) && m[difference] != i){
                result.push_back(i);
                result.push_back(m[difference]);
                break;
            }
        }

        return result;
    }
};
