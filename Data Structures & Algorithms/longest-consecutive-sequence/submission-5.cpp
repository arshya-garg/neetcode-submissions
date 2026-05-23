class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        unordered_set<int> st(nums.begin(),nums.end());
        int maxi = 0;
        for(auto x:st){
            if(st.find(x-1)== st.end()){ // any element before x should not exist, if it exist that it starts from there
            int curr = x;
            int temp = 0;
            while(st.find(curr+1) != st.end()){ // till ele+1 is found
                temp++;
                curr = curr+1;

            }
            maxi = max(maxi,temp);
            }
            
        }
        return maxi+1;
    }
};
