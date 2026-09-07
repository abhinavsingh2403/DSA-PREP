class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int fr=0,ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(fr==0){
                fr++;
                ans=nums[i];
            }
            else if(nums[i]==ans)fr++;
            else fr--;
        }
        return ans;
    }
};