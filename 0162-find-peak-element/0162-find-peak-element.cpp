class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n=nums.size();
        int low=0,high=n-2;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(nums[mid]<nums[mid+1])low=mid+1;
            else{
                high=mid-1;
            }
        }
    return low;
    }
};