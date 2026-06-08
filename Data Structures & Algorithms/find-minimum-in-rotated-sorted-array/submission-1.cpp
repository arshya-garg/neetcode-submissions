class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();
        int start = 0, end = n-1;
        int ans = nums[0];
        // one part will always be sorted, find that

        while(end>=start){
            if(nums[start]<nums[end]){
                ans = min(ans,nums[start]);
                return ans;
            }
            int mid = (start+end)/2;
            ans = min(ans,nums[mid]);
            if(nums[mid]>=nums[start]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
        return ans;

    }
};
