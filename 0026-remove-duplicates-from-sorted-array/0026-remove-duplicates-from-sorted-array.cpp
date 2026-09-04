class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st(nums.begin(), nums.end());
        int in = 0;
        for (int i : st) {
            nums[in] = i;
            in++;
        }
        return in ;
    }
};