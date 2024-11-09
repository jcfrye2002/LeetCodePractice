class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_map<int, bool> m;

        for(unsigned int i = 0; i < nums.size(); i++){
            if(m.find(nums.at(i)) != m.end()){
                return true;
            } else{
                m[nums.at(i)] = true;
            }
        }

        return false;
    }
};
