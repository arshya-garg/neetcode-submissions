class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = INT_MIN;
        vector<int> ans;
        int temp = k;
        int left = 0;
        int right = 0;
        while(right<n-k+1){
            while(k>0){
                maxi = max(maxi,nums[right]);
                k--;
                right++;
            }
            if(k==0){
                ans.push_back(maxi);
                k = temp;
                maxi = INT_MIN;
                left++;
                right = left;
            }
        }
        return ans;

    }
};
