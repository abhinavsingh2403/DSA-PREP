class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==0)return 0;
        int longest=1,c=0,last=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]-1==last){
                c++;
                last=nums[i];
            }
            else if(nums[i]!=last){
                c=1;
                last=nums[i];
            }
            longest=max(longest,c);
        }
        return longest;
    }
};