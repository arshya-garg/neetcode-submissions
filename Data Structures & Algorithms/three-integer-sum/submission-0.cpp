class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        set<vector<int>> st;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int j = i+1;
            int k = n-1;
            while(k>j){
                int sum = nums[i]+nums[j]+nums[k]; 
                if(sum==0){
                    st.insert({nums[i],nums[j],nums[k]});
                    k--;
                    j++;
                }
                else if(sum>0)
                    k--;
                else
                    j++;
            }
        }
        for(vector<int> x:st)
            ans.push_back(x);
        
        return ans;
    }
};
