class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k=k%n;
        vector<int>temp;
        for(int i=0;i<n;i++){
            temp.push_back(nums[i]);
        }
        for(int i=0;i<k;i++){
            nums[i]=temp[n-k+i];
        }
        for(int i=k;i<n;i++){
            nums[i]=temp[i-k];
        }
    }
};