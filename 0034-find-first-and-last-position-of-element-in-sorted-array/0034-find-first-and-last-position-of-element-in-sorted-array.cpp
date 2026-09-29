class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        ans.push_back(firstOcc(nums, target));
        ans.push_back(lastOcc(nums, target));
        return ans;
    }

    int firstOcc(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int ans1 = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                ans1 = mid;
                high = mid - 1;
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ans1;
    }

    int lastOcc(vector<int>& nums, int target) {
        int low = 0, high = nums.size() - 1;
        int ans2 = -1;
        while (low <= high) {
            int mid = (low + high) / 2;
            if (nums[mid] == target) {
                ans2 = mid;
                low = mid + 1;
            }
            else if (nums[mid] < target) {
                low = mid + 1;
            }
            else {
                high = mid - 1;
            }
        }
        return ans2;
    }
};