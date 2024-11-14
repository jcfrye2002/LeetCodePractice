class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map <int, int> m;

        for(unsigned int i = 0; i < nums.size(); i++){
            if(!m.count(nums.at(i))){ //if it doesn't exist already
                m[nums.at(i)] = 1;
            } else{
                m[nums.at(i)] = m[nums.at(i)] + 1;
            }
        }

        vector<vector<int>> result(nums.size() + 1);

        for(const auto& v : m){
            result.at(v.second).push_back(v.first);
        }

        vector<int> r;

        for(unsigned int i = result.size() - 1; i >= 0; i--){
            if(!result.at(i).empty()){
                for(unsigned int j : result.at(i)){
                    r.push_back(j);
                    if(r.size() == k){
                        return r;
                    }
                }
            }
        }
    }
};
