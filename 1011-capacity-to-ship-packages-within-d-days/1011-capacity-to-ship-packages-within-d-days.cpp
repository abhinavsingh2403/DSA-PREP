class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int lo = *max_element(weights.begin(), weights.end());
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=weights[i];
        }
        int low=lo,high=sum;
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(daysneeded(weights,mid)<=days){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
    int daysneeded(vector<int>& weights,int cap){
        int n=weights.size();
        int day=1,load=0;
        for(int i=0;i<n;i++){
            load+=weights[i];
            if(load>cap){
                day++;
                load=weights[i];
            }
        }
        return day;
    }
};