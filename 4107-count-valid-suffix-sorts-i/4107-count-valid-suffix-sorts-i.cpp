class Solution {
public:
    int countSuffix(vector<int>& nums, vector<int>& target) {
         int n = nums.size();
        vector<int> a = nums, b = target;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a != b) return 0;
        int p=0;
        while(p<n&&nums[p]==target[p])p++;
        int c=0;
        for(int i=n-1;i>=0;i--){
            if(i<n-1&&target[i]<target[i+1])break;
            if(i<=p)c++;
        }
        return c;
    }
};