class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int i = 0;
        int j = n-1;
        int ans = 0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int profit = prices[j]-prices[i];
                if(profit>0){
                    ans = max(profit,ans);
                }
            }
        }
        return ans;
    }
};
