class Solution {
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>res;
        vector<string>ds;
        findp(0,s,res,ds);
        return res;
    }
    void findp(int ind,string s,vector<vector<string>>&res,vector<string>&ds){
        if(ind==s.size()){
            res.push_back(ds);
            return;
        }
        for(int i=ind;i<s.size();i++){
            if(ispal(s,ind,i)){
                ds.push_back(s.substr(ind,i-ind+1));
                findp(i+1,s,res,ds);
                ds.pop_back();

            }
        }
    }

    bool ispal(string s,int start,int end){
        while(start<=end){
            if(s[start++]!=s[end--]){
               return false;
            }
        }
        return true;
    }
};