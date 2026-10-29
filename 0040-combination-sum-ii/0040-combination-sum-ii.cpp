class Solution {
public:
   vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(),candidates.end());
        vector<vector<int>> ans;
        vector<int> ds;
        findsum(0, candidates, target, ans, ds);
        return ans;
    }
    void findsum(int idx, vector<int>& c, int target,vector<vector<int>>& ans, vector<int>& ds) {
    if (target == 0) { ans.push_back(ds); return; }
    for (int i = idx; i < c.size(); i++) {
        if (i > idx && c[i] == c[i-1]) continue; 
        if (c[i] > target) break;                
        ds.push_back(c[i]);
        findsum(i + 1, c, target - c[i], ans, ds); 
        ds.pop_back();
    }
}
};