class Solution {
public:
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>>ans;
        vector<int>ds;
        findsum(1,k,n,ans,ds);
        return ans;
    }
     void findsum(int start,int k,int target,vector<vector<int>>&ans,vector<int>&ds){
        if(ds.size()==k){
            if(target==0)ans.push_back(ds);
            return;
        }
        for(int i=start;i<=9;i++){
            if(i>target)break;
            ds.push_back(i);
            findsum(i+1,k,target-i,ans,ds);
            ds.pop_back();
        }
     }
};