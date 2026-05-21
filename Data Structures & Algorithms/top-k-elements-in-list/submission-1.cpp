class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        int maxi = 0;
        for(auto it:mp){
            maxi = max(maxi,it.second);
        }
        while(k > 0){
            for(auto it:mp){
                if(it.second == maxi){
                    ans.push_back(it.first);
                    k--;
                }
            }
            maxi--;
        }
        return ans;

    }
};
