class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            int num=nums[i];
            int rest=target-num;
            if(mp.find(rest)!=mp.end()){
                return {mp[rest],i};
            }
            mp[num]=i;
        }
        return {-1,-1};
    }
};