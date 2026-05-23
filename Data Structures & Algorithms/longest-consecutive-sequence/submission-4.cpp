class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        unordered_set<int> st(nums.begin(),nums.end());
        int maxi = 0;
        for(auto x:st){
            int curr = x;
            int temp = 0;
            while(st.find(curr+1) != st.end()){
                temp++;
                curr = curr+1;

            }
            maxi = max(maxi,temp);
        }
        return maxi+1;
    }
};
