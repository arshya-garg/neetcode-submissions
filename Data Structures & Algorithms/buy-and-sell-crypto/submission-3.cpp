class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();

        int left = 0, right = 1;
        int profit = 0, maxi = 0;
        while(right<n){
            if(prices[left]<prices[right]){
                profit = prices[right]-prices[left];
                maxi = max(maxi,profit);
            }
            else{
                left = right; // current smaller price become left pointer;
            }
            right++;
        }
        return maxi;
    }
};
