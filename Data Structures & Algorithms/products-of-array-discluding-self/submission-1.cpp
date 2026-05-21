class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        int prod = 1;
        vector<int> ans(n,0);
        int zero = -1;
        for(int i=0;i<n;i++){
            if(nums[i] != 0){
                prod = prod*nums[i];
            }
            else{
                if(zero==-1)
                    zero=i;
                else
                    return ans;
            }
        }
        if(zero == -1){
            for(int i=0;i<n;i++){
                ans[i] = prod/nums[i];
            }
        }
        else{
            ans[zero] = prod;
        }
        return ans;
    }
};
