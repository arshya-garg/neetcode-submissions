class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        set<int> st(nums.begin(),nums.end());
        int maxi = 0;
        int temp = 0;
        for(auto x:st){
            if(st.find(x-1) != st.end()){ // found
                temp++;
            }
            else{
                temp=0;
            }
            maxi = max(maxi,temp);
        }
        return maxi+1;
    }
};
