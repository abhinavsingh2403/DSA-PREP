class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                temp.push_back(nums[i]);
            }
        }
        int z=temp.size();
        for(int i=0;i<z;i++){
            nums[i]=temp[i];
        }
        for(int i=z;i<n;i++){
            nums[i]=0;
        }
    }
};