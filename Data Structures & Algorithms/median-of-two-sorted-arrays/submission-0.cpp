class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();
        vector<int> temp;
        temp.insert(temp.end(),nums1.begin(),nums1.end());
        temp.insert(temp.end(),nums2.begin(),nums2.end());
        sort(temp.begin(),temp.end());
        int size = temp.size();
        if(size%2!=0){
            return temp[size/2]; 
        }
        return ((double)temp[size/2-1] + (double) temp[size/2])/2.0;
    }
};
