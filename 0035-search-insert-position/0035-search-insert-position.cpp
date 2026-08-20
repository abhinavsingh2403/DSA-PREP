class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        return binarySearch(nums, target, low, high);
    }
    int binarySearch(vector<int>& nums, int target, int low, int high) {
        if (low > high) return low; 
        int mid = low + (high - low) / 2;
        if (nums[mid] == target) return mid;
        else if (nums[mid] < target) return binarySearch(nums, target, mid + 1, high);
        else return binarySearch(nums, target, low, mid - 1);
    }
};