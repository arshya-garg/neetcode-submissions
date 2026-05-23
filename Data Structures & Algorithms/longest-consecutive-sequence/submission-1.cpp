class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        int temp = 0;
        int count = 0;
        if(nums.size()==0){
            return 0;
        }
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            if(nums[i]==nums[i-1]+1){
                temp++;
            }
            else{
                
                temp = 0;
            }
            count = max(count,temp);
        }
        return count+1;
    }
};
