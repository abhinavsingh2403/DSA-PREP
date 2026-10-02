class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int n=piles.size();
        int m=maxele(piles);
        int low=1,high=m;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(hours(piles,mid)<=h)high=mid-1;
            else low=mid+1;
        }
        return low;
    }
    int maxele(vector<int>& piles){
        int n=piles.size();
        int maxm=piles[0];
        for(int i=0;i<n;i++){
            if(piles[i]>=maxm){
                maxm=piles[i];
            }
        }
        return maxm;
    }
    long long hours(vector<int>& piles,int div){
        long long total=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            total+=(piles[i]+(long long)div-1)/div;
        }
        return total;
    }
};