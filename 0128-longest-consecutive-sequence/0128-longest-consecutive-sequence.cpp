class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n==0)return 0;
        int lastele=INT_MIN;
        int cnt=0,longest=1;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            if(nums[i]-1==lastele){
                lastele=nums[i];
                cnt+=1;
            }
            else if(nums[i]!=lastele){
                cnt=1;
                lastele=nums[i];
            }
            longest=max(longest,cnt);
        }
        return longest;
    }
};