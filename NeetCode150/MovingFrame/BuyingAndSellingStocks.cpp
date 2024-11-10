class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = 1;
        int profit = 0;

        while(right < prices.size()){
            if(prices.at(left) < prices.at(right)){
                int temp = prices.at(right) - prices.at(left);
                if(temp > profit){
                    profit = temp;
                }
            } else{
                left = right;
            }
            right++;
        }

        return profit;
    }
};
