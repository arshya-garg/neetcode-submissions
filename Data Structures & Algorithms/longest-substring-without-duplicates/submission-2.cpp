class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int n = s.length();
        int left = 0, right = 0;
        int ans = 0;
        for(int right=0;right<n;right++){
            while(st.find(s[right]) != st.end()){ // found
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            ans = max(ans,right-left+1);
        }
        return ans;
    }
};
