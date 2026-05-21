class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod = 1;
        vector<int> ans(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(j != i){
                    prod = prod* nums[j];
                }
            }
            ans[i] = prod;
            prod = 1;
        }
        return ans;
    }
};
