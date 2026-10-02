class Solution {
public:
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        if((long long)m*k>n)return -1;
        int j=maxm(bloomDay);
        int l=minm(bloomDay);
        int low=l,high=j;
        int ans=-1;
        while(low<=high){
            int mid= low+(high-low)/2;
            if(possible(bloomDay,mid,m,k)==true){
              ans=mid;
              high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int maxm(vector<int>& bloomDay){
        int n=bloomDay.size();
        int m=bloomDay[0];
        for(int i=0;i<n;i++){
            if(bloomDay[i]>=m){
                m=bloomDay[i];
            }
        }
        return m;
    }
    int minm(vector<int>& bloomDay){
        int n=bloomDay.size();
        int m=bloomDay[0];
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=m){
                m=bloomDay[i];
            }
        }
        return m;
    }
    bool possible(vector<int>& bloomDay,int day,int m, int k){
        int n=bloomDay.size();
        int cnt=0,no=0;
        for(int i=0;i<n;i++){
            if(bloomDay[i]<=day)cnt++;
            else{
                no+=(cnt/k);
                cnt=0;
            }
        }
        no+=(cnt/k);
        if(no>=m)return true;
        return false;
    }
};