class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        int low=*max_element(nums.begin(),nums.end());
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int high=sum;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(ispossible(nums,mid,k)==true){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    bool ispossible(vector<int>& nums,int m, int k){
        int n=nums.size();
        int cnt=1,load=0;
        for(int i=0;i<n;i++){
            if(nums[i]+load>m){
                cnt++;
                load=nums[i];
            }
            else load+=nums[i];
        }
        if(cnt<=k)return true;
        else return false;
    }
};