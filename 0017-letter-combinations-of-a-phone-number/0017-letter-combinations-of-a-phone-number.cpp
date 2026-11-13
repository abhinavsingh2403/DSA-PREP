class Solution {
public:
    vector<string> letterCombinations(string digits) {
     vector<string>res;
     vector<string>mp={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
     string s="";
     solve(0,digits,res,mp,s);
     return res;   
    }
    void solve(int i,string &digits,vector<string>&res,vector<string>&mp,string &s){
        if(i==digits.size()){
            res.push_back(s);
            return;
        }
        string letters=mp[digits[i]-'0'];
        for(char c:letters){
            s.push_back(c);
            solve(i+1,digits,res,mp,s);
            s.pop_back();
        }
    }
};