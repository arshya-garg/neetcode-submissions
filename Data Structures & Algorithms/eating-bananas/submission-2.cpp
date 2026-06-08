class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n = piles.size();
        sort(piles.begin(),piles.end());
        int ans = piles[n-1];
        int start = 1, end= piles[n-1];
        while(end>=start){
            int mid = (start+end)/2;
            long long temp = 0;
            for(int i=0;i<n;i++){
                temp += ceil((double)piles[i]/mid);
            }
            if(temp<=h){
                ans = min(ans,mid);
                end = mid-1;
            }
            else{
                start = mid+1;
            }
            
        }
        return ans;
    }
};
