class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int ans = 0;

        for(int i = 0; i< n; i++){
            int buy = prices[i];
            for(int j = i;j<n;j++){
                int sell = prices[j];

                ans = max(sell-buy,ans);
            }
        }
        return ans;
    }
};
