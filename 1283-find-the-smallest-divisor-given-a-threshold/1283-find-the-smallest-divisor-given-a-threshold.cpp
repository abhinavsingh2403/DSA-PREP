class Solution {
public:
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int m=maxele(nums);
        int low=1,high=m;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(summ(nums,mid)<=threshold){
                high =mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
    int maxele(vector<int>& nums){
        int n=nums.size();
        int maxm=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>=maxm){
                maxm=nums[i];
            }
        }
        return maxm;
    }
    int summ(vector<int>& nums,int div){
        int n=nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=ceil((double)nums[i]/(double)div);
        }
        return sum;
    }
};