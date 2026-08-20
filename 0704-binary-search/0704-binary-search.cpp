class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int low = 0, high = n - 1;
        return binarysearch(nums, target, low, high);
    }
    int binarysearch(vector<int>& nums, int target, int low, int high) {
        if (low > high) return -1; 
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) {
            return mid;
        }
        else if (nums[mid] > target) {
            return binarysearch(nums, target, low, mid - 1);   
        }
        else {
            return binarysearch(nums, target, mid + 1, high);  
        }
    }
};