class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i =0, j=n-1;
        int ans = 0;
        while(j>i){
            int length = min(heights[i],heights[j]);
            int breadth = j-i;
            int area = length*breadth;
            ans = max(ans,area);
            if(heights[i]<=heights[j])
                i++;
            else
                j--;
        }
        
        return ans;
    }
};
