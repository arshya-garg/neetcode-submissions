class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i =0, j=n-1;
        int ans = 0;
        for(int i=0;i<n;i++){
            int j = n-1;
            while(j>i){
                int length = min(heights[i],heights[j]);
                int breadth = j-i;
                int area = length*breadth;
                ans = max(ans,area);
                j--;
            }
        }
        return ans;
    }
};
